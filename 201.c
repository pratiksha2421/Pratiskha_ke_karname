#include<stdio.h>
#include<conio.h>
int count(int);
void main()
{
int a,c;
printf("\n enter a number=");
scanf("%d",&a);
c= count(a);
printf("\n number of digit of %d=%d",a,c);
}
void count(int x)
{
int i,s;
s=0;
i=x;
while(i>0);
{
    s++;
    i=i/10;
}
return(s);
}
