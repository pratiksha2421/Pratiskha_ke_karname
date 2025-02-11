// WAP to input a matrix of order 3 by 4 calculate and print sum of each row individually.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][4],i,j,s;
printf("\n enter an array =");
for(i=0; i<=2; i++)
{
    for(j=0; j<=3; j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0; i<=2; i++)
{
    s=0;
for(j=0; j<=3; j++)
{
s=s+a[i][j];
}
printf("\n sum of %d row individually : %d",i,s);

}
}