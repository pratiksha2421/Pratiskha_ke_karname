// WAP to input a number and check it is prime or composite using function with return value

#include <stdio.h>
#include <conio.h>
int check(int); // fn dec
void main()
{
    int n, r;
    printf("\n enter a number=");
    scanf("%d", &n);
    r = check(n); // fn call

    if (r == 2)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is a composite number", n);
    }

} // main close

int check(int a) // fn define
{
    int i, c;
    c = 0;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            c++;
        }
    }
        return c;
}