// WAP to input a matrix of order 3 by 3 and print elements of main daigonal in matix form.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j;
printf("\n enter a matrix=");
for(i=0; i<=2; i++)
{
    for(j=0; j<=2; j++)
    {
    scanf("%d",&a[i][j]);
}
}
for(i=0; i<=2;i++)
{
    for(j=0; j<=2; j++)
    {
        if(i==j)
        {
            printf("%d  ",a[i][j]);
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
}
}