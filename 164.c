#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,l;
    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        for(k=1; k<=10-2*i; k++)
        {
            printf(" ");
        }
        for(l=1; l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
}