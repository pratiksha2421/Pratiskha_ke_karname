// WAP to input 5 elements into an array and print total number of factor of each element using function //

#include <stdio.h>
#include <conio.h>
int fact(int);
void main()
{
    int a[5], i;
    printf("\n enter array =");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        printf("\n total number of factor of %d=%d", a[i], fact(a[i]));
    }
}
int fact(int p)
{
    int i, f;
    f = 0;
    for (i = 1; i <= p; i++)
    {
        if (p % i == 0)
        {
            f++;
        }
    }
   return f;
}