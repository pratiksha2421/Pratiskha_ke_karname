// WAP to input x and n and calculate sum of series- x/1+x^2/2+x^3/3.......n terms using function.

#include <stdio.h>
#include <conio.h>
#include <math.h>
void series(int, int);
void main()
{
    int x, n;
    printf("\n enter x,n value=");
    scanf("%d%d", &x, &n);
    series(x, n);
}
void series(int x, int n)
{
    int i, a, b,p;
    float s;
    s = 0.0;
    for (i = 1; i <= n; i++)
    {
        p= pow(x,i)/i;  
        s=s+p;
          }
    printf("\n sum =%f", s);
}