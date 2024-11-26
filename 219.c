#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
printf("\n enter array =");
for(i=0; i<=4; i++)
{
    scanf("%d",&a[i]);
}
for(i=4; i>=0; i--)
{
    printf("%d, ",a[i]);
}
}