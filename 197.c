// Write a menu driven program to input a digit in(0 to 9) ansd print this digit in word form

#include<stdio.h>
#include<conio.h>
void menu(int);
void main()
{
int a;
printf("\n enter digit from 0 to 9 =");
scanf("%d",&a);
menu(a);
}
void menu(int p)
{
    switch(p)
    {
        case 0:
        printf("Zero");
        break;
        case 1:
        printf("One");
        break;
        case 2:
        printf("Two");
        break;
        case 3:
        printf("Three");
        break;
        case 4:
        printf("Four");
        break;
        case 5:
        printf("Five");
        break;
        case 6:
        printf("Six");
        break;
        case 7:
        printf("Seven");
        break; 
        case 8:
        printf("Eight");
        break;
        case 9:
        printf("Nine");
        break;
        default:
        printf("\n wrong choice");
    }
}