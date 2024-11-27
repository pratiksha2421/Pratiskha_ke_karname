// Write a program to input a number and check it is even or odd using function
#include <stdio.h>
#include <conio.h>
void check(int); // funtion declare
void main()
{
    int n;
    printf("\n enter a number=");
    scanf("%d", &n); // user input number
    check(n);        // function calling
}

void check(int p) // function defination
{

    if (p % 2 == 0)
    {
        printf("%d is a even number", p);
    }
    else
    {
        printf("%d is a  odd number", p);
    }
}