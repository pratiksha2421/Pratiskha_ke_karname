#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a,b;
    printf("enter a number=");
    scanf("%d",&n);
    a=0;
    b=5;
    i=1;
    do
    {
        a=b;
        printf("\n %d",a);
        b=b*3;
        i++;
    } while (i<=n);
    
}