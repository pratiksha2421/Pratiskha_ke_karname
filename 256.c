//  WAP to input 1 integer value 1 decimal value and 1 character value using structure.

#include<stdio.h>
#include<conio.h>
struct numbers
{
int a;
float b;
char c;
} p;

void main()
{
printf("\n enter a integer vaalue=");
scanf("%d",&p.a);
printf("\n enter a decimal value=");
scanf("%f",&p.b);
printf("\n enter a character value =");
scanf(" %c",&p.c);
printf("\n integer value of =%d",p.a);
printf("\n decimal value of =%f",p.b);
printf("\n character value of = %c",p.c);
}