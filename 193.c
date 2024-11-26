#include<stdio.h>
#include<conio.h>
void check(int);
void main()
{
int n;
printf("\n enter a number=");
scanf("%d",&n);
check(n);
}

void check(int p)
{

if (p%2==0)
{
    printf("%d is a even number",p);
}
else
{
printf("%d is a  odd number",p);
}

}