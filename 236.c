// WAP to input a matrix of order 3 by 2 and calculate and print product of each column individually

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][2],i,j,product;
 for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 2; j++)
    {
        printf("INDEX => Row: %d || column: %d || Enter Elements :  ",i,j);
        scanf("%d",&a[i][j]);
    }
    }
    for (int j = 0; j < 2; j++)
    {
        product=1;
        for (int i = 0; i < 3; i++)
        {
            product = product *a[i][j];
        }
    printf("\n Product of column %d :: %d",j,product);
    }
}

