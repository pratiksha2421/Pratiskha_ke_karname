// WAP to input length and breadth of a rectangle and calculate it's area and perimeter using call by reference.

#include<stdio.h>
#include<conio.h>
void rectangle(float,float,float *, float*);
void main()
{
float l,b,ar,pr;
printf("\n enter l,b=");
scanf("%f%f",&l,&b);
rectangle(l,b,&ar,&pr);
printf("\n area=%f\n perimeter=%f",ar,pr);
}
void rectangle(float x, float y, float *p, float *r)
{
    *p=(x*y);
    *r=2*(x+y);
}