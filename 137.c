#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c,p,i,n,x;
    float s;
    s=0;
    b=-3;
    p=-1;
    c=0;
    printf("\n enter a n,x = ");
    scanf("%d%d",&n,&x);
for(i=1; i<=n; i++)
{
    p=p+4;
    b=b+7;
    a=pow(x,p);
    c=c+a;
    s=s+(1.0*c)/b;
}
printf("\n sum = %f",s);
}