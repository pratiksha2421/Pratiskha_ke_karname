#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,b;
float s;
a=1;
b=0;
s=0;
printf("\n enter a number = ");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
a=a;
b=b+1;
s=s+(1.0*a)/b;
}
printf("\n sum= %f",s);
}

