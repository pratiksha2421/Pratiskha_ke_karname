// WAP to inpur a book name , number of pages, and publication year of 5 books and display all values using union.

#include <stdio.h>
#include <conio.h>
union book
{
    char name[50];
    int pages, year;
} p[5];
void main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("\n enter book name=");
        scanf("%s", &p[i].name);
        printf("\n book name of %d=%s", i, p[i].name);
        printf("\n enter number of pages=");
        scanf("%d", &p[i].pages);
        printf("\n number of pages of %d=%d", i, p[i].pages);
        printf("\n enter publication year=");
        scanf("%d", &p[i].year);
        printf("\n publication year of %d=%d", i, p[i].year);
    }
}