#include <stdio.h>
#include <conio.h>
void print(int);
void main()
{
    int a;
    printf("\n enter a number=");
    scanf("%d", &a);
    print(a);
    
}
void print(int p)
{
    int i, f;
    f = 1;
    if (p < 0)
    {
        
        printf("\n factorial value of negative number does not exist");
    }
    else
    {
        for (i = 1; i <= p; i++)
        {
            f = f * i;
        }
        printf("\n factorial value of %d is =%d", p,f );
    }
}