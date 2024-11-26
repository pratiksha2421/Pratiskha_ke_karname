#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,l;
 for(i=1; i<=5; i++)
 {
for(j=i; j<=i-1; j++)
{
    printf("*");
}
for(k=1; k<=10-2*i; k++)
{
    printf(" ");
}
for(l=i; l<=i; l++)
{
    printf("*");
}
printf("\n");
 }   
}