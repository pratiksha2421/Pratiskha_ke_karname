#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
printf("\n enter array = ");
for(i=0; i<=4; i++)
{
    scanf("%d",&a[i]);
}
printf("\n buzz number are=");
for(i=0; i<=4; i++)
{
    if(a[i]%7==0||a[i]%10==7)
    {
        printf("%d, ",a[i]);
    }
}
}