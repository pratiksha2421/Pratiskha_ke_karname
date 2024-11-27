// WAP to input 5 elements into an array and print all the elements in different line with it's index

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
printf("\n enter array=");
for(i=0; i<=4; i++)
{
scanf("%d",&a[i]);
}
for(i=0; i<=4; i++)
{ 
    printf(" the value of index %d =%d \n",i,a[i]);
}
}