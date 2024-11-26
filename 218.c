#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],i;
printf("\n enter array =");
for(i=0; i<=4; i++)
{
    scanf("%d",&a[i]);
}
for(i=0; i<=4; i++)
{
scanf("%d",&b[i]);
}
for(i=0; i<=4; i++)
{
    if(a[i]!=b[i])
    {
        printf("\n array is not equal ");
        break;
    }
}
if(i==5)
{
    printf("\n array is equal");
}
}