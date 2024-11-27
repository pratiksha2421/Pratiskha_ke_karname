// WAP to input a number and check it is neon number or not using function with return value.

#include<stdio.h>
#include<conio.h>
int check(int);
void main()
{
int n,r;
printf("\n enter a number=");
scanf("%d",&n);
r=check(n);
if(r==1)
{
printf("\n %d is neon number",n);
}
else
{
    printf("\n %d is not neon number",n);
}
}
int check(int p)
{
    int sq,s;
    for(sq=p*p; sq>0; sq=sq/10)
    {
        sq=s+sq%10;
    }
    if(s==p)
    {
        printf("\n it is neon number");
    }
    else{
        printf("\n it is not neon number");
    }
}