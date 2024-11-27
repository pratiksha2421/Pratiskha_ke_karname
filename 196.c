// WAP to input a number of terms and print fibonacci series with this term using function

#include <stdio.h>
#include <conio.h>
void series(int);
void main()
{
    int n;
    printf("\n enter a number=");
    scanf("%d", &n);
    series(n);
}
void series(int p)
{
    int i, a, b, s;

    a = -1;
    b = 1;
    printf("\n fibonacci series = ");
    for (i = 1; i <= p; i++)
    {
        s = a + b;
        a = b;
        b = s;
        printf("%d ",s);
    }
}