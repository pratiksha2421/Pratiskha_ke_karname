// WAP to input 2 numbers and swap these numbers using call by reference .

#include<stdio.h>
#include<conio.h>
void swap(int *, int *);
void main()
{
int a,b;
printf("\n enter the value of a,b=");
scanf("%d%d",&a,&b);
printf("\n a=%d\n b=%d",a,b);
swap(&a,&b);
printf("\n a=%d\n b=%d",a,b);
}
void swap(int *x,int *y)
{
    int z;
    printf("\n *x=%d\n *y=%d",*x,*y);
    z=*x;
    *x=*y;
    *y=z;
    printf("\n *x=%d\n *y=%d",*x,*y);
}