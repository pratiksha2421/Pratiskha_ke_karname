// WAP to input a matrix of order 3 by 3 and calculate sum of elements of both daigonal.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,s1,s2,s;
s1=s2=s=0;
printf("\n enter an array=");
for(i=0; i<=2; i++)
{
    for(j=0; j<=2; j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0; i<=2; i++)
{
        for(j=0; j<=2; j++)
        {
            if(i==j)
            {
            s1=s1+a[i][j];
            }
            if(i+j==2)
            {
                s2=s2+a[i][j];
            }
        }
}
s=s1+s2;
printf("\n sum of first daigonal=%d",s1);
printf("\n sum of second daigonal=%d",s2);
printf("\n sum of both daigonal=%d",s);
}