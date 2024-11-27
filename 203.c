// WAP to input a number and calculate number of factors using function with return value

#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int n,p;
printf("\n enter a number=");
scanf("%d",&n);
p=fact(n);
printf("\n number of factors=%d",p);
}
int fact(int p)
{
    int i,c;
    c=0;
    for(i=1; i<=p; i++)
    {
if(p%i==0)
{
    c++;
}
    }
    
    return c;
}