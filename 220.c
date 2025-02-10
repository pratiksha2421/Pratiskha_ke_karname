// WAP to input 2 array of sum size or different size and merge these two array in third array.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],c[10],i;
printf("\n enter array =");
for(i=0;i<=4; i++)
{
    scanf("%d",&a[i]);
}
printf("\n enter array=");
for(i=0; i<=4; i++)
{
    scanf("%d",&b[i]);
}
printf("\n third array =");
for(i=0; i<=9; i++)
{
    if(i<=4)
    {
        c[i]=a[i];
    }
    else
    {
c[i]=b[i];
    }
}
for(i=0; i<=9; i++)
{
printf("%d",c[i]);
}
}