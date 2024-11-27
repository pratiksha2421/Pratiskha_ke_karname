// WAP to input a number and calculate sum of digits of this number using function with return value

#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
int n,r;
printf("\n enter a number=");
scanf("%d",&n);
r=sum(n);
printf("\n sum of digits=%d",r);
}
int sum(int a)
{
    int i,s=0,r;
    for(i=a; i>0; i=i/10)
    {
        r=i%10;
        s=s+r;
    }
    
    return (s);
}