#include<stdio.h>
#include<conio.h>
void sum(int);
void main()
{
int a;
printf("\n enter a number=");
scanf("%d",&a);
sum(a);
}
void sum(int p)
{
    int i,r,n,s;
    for(i=n;i>0; i=i/10 )
    {
        r=i%10;
        s=s+r;
    }
    printf("\n sum of digit=%d",s);
}