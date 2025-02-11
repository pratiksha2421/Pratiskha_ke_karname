// WAP to input 1 integer value 1 decimal value and 1 character value using union.

#include<stdio.h>
#include<conio.h>
union numbers
{
int a;
float b;
char c;
} p;

void main()
{
printf("\n enter a integer vaalue=");
scanf("%d",&p.a);
printf("\n integer value  =%d",p.a);
printf("\n enter a decimal value=");
scanf("%f",&p.b);
printf("\n decimal value  =%f",p.b);
printf("\n enter a character value =");
scanf(" %c",&p.c);
printf("\n character value  = %c",p.c);
}