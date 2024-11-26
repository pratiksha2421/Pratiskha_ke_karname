#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,s,a,b;
a=2;
b=3;
s=0;
printf("\n enter the number of terms =");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
s=s+a;
a=a+b;
b=b+2;
}
printf("\n sum of the series 2+5+10+17+ - - - for %d terms is = %d ",n,s);
}
