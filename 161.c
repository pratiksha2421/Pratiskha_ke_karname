#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=1; i<=5; i++)
    {
        for(k=1; k<=5-i; k++)
        {
            printf(" ");
        }
        if(i%2==0)
        {
for(j=1; j<=i; j++)
{
    printf("#");
}
        }
        else
        {
            for(j=1; j<=i;j++)
            {
                printf("*");
            }
        }
    printf("\n");
    }
}