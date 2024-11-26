#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,sum;
sum = 0;
printf("\n enter array=");
for(i=0; i<=4; i++)
{
    scanf("%d",&a[i]);
}
for(i=0; i<=4; i++)
{
    sum = sum + a[i];
}
printf("the sum of all element =%d",sum);
}                                                           