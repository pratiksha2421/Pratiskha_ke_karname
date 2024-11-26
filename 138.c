#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,p,n,x,i;
float s;
s=0;
p=1;
n=9/2;
c=1;
printf("\n enter n,x=");
scanf("%d%d",&n,&x);
for(i=1; i<=n; i++)
{
    p=p+3;
    b=b*2;
    a=pow(x,p);
    c=c+a;
    s=s+(1.0*c)/b;
}
printf("\n sum= %f",s);
}