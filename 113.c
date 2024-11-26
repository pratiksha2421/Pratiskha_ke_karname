#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,b,s,j;
a=-1;
b=1;
printf("\n enter a number=");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
s=a+b;
a=b;
b=s;
for(j=a+1; j<b; j++)
{
printf("%d",j);
i++;
if(i==n)
break;
}
}
}
