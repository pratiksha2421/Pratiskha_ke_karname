// WAP to input a number and count number of digits using function

#include<stdio.h>
#include<conio.h>
void count(int);
void main()
{
int n;
printf("\n enter a number=");
scanf("%d",&n);
count(n);
}
void count(int a)
{
    int i,c=0;
    for(i=a; i>0; i=i/10)
    {
        c++;
    }
    printf("\n number of digits=%d",c);
}