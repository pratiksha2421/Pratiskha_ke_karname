// WAP to input name, age , percentage of 5 students and display with proper message using union.

#include <stdio.h>
#include <conio.h>
union class
{
    char name[50];
    int age;
    float percentage;
} p[5];
void main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("\n enter age=");
        scanf("%d", &p[i].age);
        printf("\n age of person %d =%d", i, p[i].age);
        printf("\n enter  percentage=");
        scanf("%f", &p[i].percentage);
        printf("\n percentage of person %d =%f", i, p[i].percentage);
        printf("\n enter name =");
        scanf(" %s", &p[i].name);
        printf("\n name of person %d = %s", i, p[i].name);
    }
}
