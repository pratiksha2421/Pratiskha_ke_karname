// WAP to input a matrix of order 2 by 3 and print transpose of this matrix.

#include<stdio.h>
#include<conio.h>
int main()
{
    int array[2][3],trans[3][2];
      for (int i = 0; i < 2; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf("INDEX => Row: %d || Colum: %d || Enter Elements :  ",i,j);
        scanf("%d",&array[i][j]);
    }
    }
     printf(" Before Transpose \n");
    for (int i = 0; i < 2; i++)
    {
        for (int  j= 0; j < 3; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans[j][i] = array[i][j];
        }
    }
     printf(" After Transpose \n");
    for (int i = 0; i < 3; i++)
    {
        for (int  j= 0; j < 2; j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
   
}

