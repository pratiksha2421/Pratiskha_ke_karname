// WAP to input 

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5], b[5], c[5], i;
    printf("\n enter array =");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        c[i] = a[i] + b[i];
    }
    printf("\n sum =");
    for (i = 0; i <= 4; i++)
    {
    printf("\n %d",c[i]);
    }
}