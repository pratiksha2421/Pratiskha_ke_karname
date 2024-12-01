// WAP to input 5 elements into an array and print largest and smallest elements of array.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,max,min;
printf("\n enter array = ");
for(i=0; i<=4; i++)
{
    scanf("%d",&a[i]);
}
for(i=0; i<=4; i++)
{
    if(a[i]>max)
    {
        max= a[i];
    }
     if(a[i]<min)
    {
        min= a[i];
    }
}
    printf("\n largest =%d\n smallest=%d",max,min);
}