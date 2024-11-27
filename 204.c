// WAP to input a number and check it is prime or composite using function with return value

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
printf("\n %d is a prime number",n);
}
else
{
    printf("\n %d is composite number",n);
}
}
int check(int a)
{
    int i,s=1;
   if(a<=1)
   {
s=0;
   }
   else 
   {
    for(i=2; i<=a ; i++)
    {
    if(a%2==0)
{
    s=0;
}
    }
   }
   return s;
}