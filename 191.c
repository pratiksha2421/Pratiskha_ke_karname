#include<stdio.h>
#include<conio.h>
void area(float);
void main()
{
    float r;
    printf("\n enter a number=");
    scanf("%f",&r);
    area(r);
}
void area(float p )
{
    float ar;
    ar=3.14*p*p;
    printf("\n area of circle=%f",ar);
}
