// WAP to input 5 elements into an array and input a number check this number is exist in this array or not

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,n;
printf("\n enter array =");
for(i=0; i<=4; i++)
{
    scanf("%d",&a[i]);
}
printf("\n enter a number = ");
scanf("%d",&n);
if(a[i]==n)
{
    printf("\n this numbner is exist in array");
}
else
{
printf("\n this number is not exist");
}
}