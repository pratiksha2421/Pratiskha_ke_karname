#include<stdio.h>
#include<conio.h>
void check(int);
void main()
{
int a;
printf("\n enter a number=");
scanf("%d",&a);
check(a);
}
void check(int x)
{
    if(x%7==0||x%10==7)
    {
        printf("\n %d is a buzz number",x);
    }
else
{
    printf("\n %d is not a buzz  number",x);
}
}