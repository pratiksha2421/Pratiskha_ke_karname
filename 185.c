#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a;
    printf("enter a number=");
    scanf("%d",&n);
    i=1;
    do
    {
        a=i*i*i+1;
        printf("\n%d",a);
        i++;
    } while (i<=n);
    
}