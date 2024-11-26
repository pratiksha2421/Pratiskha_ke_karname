#include<stdio.h>
#include<conio.h>
void area(float,float);
void perimeter(float,float);
void main()
{
    float a,b;
    printf("\n enter length of rectangle=");
    scanf("%f",&a);
    printf("enter breadth of rectangle=");
    scanf("%f",&b);
    area(a,b);
    perimeter(a,b);
}
void area(float l, float b)
{
    float ar;
ar=l*b;
printf("\n area of reactangle=%.2f",ar);
}
void perimeter(float l, float b)
{
    float per;
    per=2*(l+b);
    printf("\n perimeter of rectangle=%.2f",per);
}

