#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,s;
s=0;
printf("\n enter a number =");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
a = (i+1)*(i+1)*(i+1)-1;
s+s+a;
}
printf("\n sum of the series = %d",s);
}
