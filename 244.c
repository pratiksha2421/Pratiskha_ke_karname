// WAP to input a string and calculate total number of special character

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[50], ch;
    int i, c, l;
    c = 0;
    printf("\n enter string=");
    gets(a);
    l = strlen(a);
    for (i = 0; i<l-1; i++)
    {
        ch=a[i];
        if((!(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9' || ch == ' ')))
        {
            c++;
        }
    }
    if (c == 0)
    {
        printf("There are no special characters");
    }
    else
    {
        printf("There are %d  characters",c);
    }
}