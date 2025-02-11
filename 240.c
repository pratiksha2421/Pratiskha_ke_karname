// WAP to input a matrix of order 3 by 4 and input a number and check whether this number is exist in this matrix or not.

#include<stdio.h>
#include<conio.h>
int main()
{
int array[3][4],e,c;
printf("Enter a array: ");
for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 4; j++)
    {
        scanf("%d",&array[i][j]);
    }
    }
printf("Enter a number for check exist or not : ");
scanf("%d",&e);
c=0;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        if (array[i][j]==e)
        {
            c++;
            break;
        }
    }
}
if (c==0)
{
printf("%d is not exist in array ",e);
}
else
{
    printf("%d is exist in array ",e);
}
}

