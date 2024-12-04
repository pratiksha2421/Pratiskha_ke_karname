// WAP to input length and breadth of a rectangle and calculate it's area and perimeter using call by reference.

#include<stdio.h>
#include<conio.h>
void area(float *, float *);
void perimeter(float *, float *);
void main()
{
int l,b;
printf("\n enter length of rectangle=");
scanf("%f",&l);
printf(" \n enter breadth of rectangle=");
scanf("%f",&b);
area(&l,&b);
perimeter(&l,&b);
}
void area(float *a,float *b)
{
    float ar;
    ar = (*a )* (*b);
printf("\n area of rectangle=%f",ar);
}
void perimeter(float *p, float *r)
{
    float per;
per= 2*(*p + *r);
printf("\n perimeter of rectangle=%f",per);
}