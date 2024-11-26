#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char buffer[1024];
    char *profiles[100];
    int profile_count = 0;

    // Execute the command and read the output
    fp = popen("netsh wlan show profiles", "r");
    if (fp == NULL) {
        printf("Failed to run command\n");
        return 1;
    }

    // Read the output line by line
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        if (strstr(buffer, "All User Profile") != NULL) {
            char *profile = strchr(buffer, ':');
            if (profile != NULL) {
                profile++; // Move past the colon
                while (*profile == ' ') profile++; // Skip spaces
                profile[strcspn(profile, "\n")] = 0; // Remove newline
                profiles[profile_count++] = strdup(profile);
            }
        }
    }
    pclose(fp);

    // Iterate over profiles and get the key content
    for (int i = 0; i < profile_count; i++) {
        char command[256];
        snprintf(command, sizeof(command), "netsh wlan show profile \"%s\" key=clear", profiles[i]);
        
        // Execute the command and read the output
        fp = popen(command, "r");
        if (fp == NULL) {
            printf("%-30s|  %s\n", profiles[i], "ENCODING ERROR");
            continue;
        }

        char *key_content = NULL;
        while (fgets(buffer, sizeof(buffer), fp) != NULL) {
            if (strstr(buffer, "Key Content") != NULL) {
                key_content = strchr(buffer, ':');
                if (key_content != NULL) {
                    key_content++; // Move past the colon
                    while (*key_content == ' ') key_content++; // Skip spaces
                    key_content[strcspn(key_content, "\n")] = 0; // Remove newline
                }
            }
        }
        pclose(fp);

        // Print the result
        if (key_content) {
            printf("%-30s|  %s\n", profiles[i], key_content);
        } else {
            printf("%-30s|  %s\n", profiles[i], "");
        }

        free(profiles[i]); // Free allocated memory
    }

    return 0;
}