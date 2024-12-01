// WAP to input two matrix of order 3 by 3 and calculate sum of these matrix.

#include<stdio.h>
#include<conio.h>
int main()
{
    int array1[3][3], array2[3][3], sum[3][3];
    printf("Enter elements of array1 :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
                        scanf("%d", &array1[i][j]);
        }
    }
    printf("\nEnter elements of array2 :\n");
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
                      scanf("%d", &array2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
         {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
         {
            printf("Sum of array1 and array2:: %d ", sum[i][j]);
        }
        printf("\n");
    }
}


