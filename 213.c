// WAP too input 5 elements into an array and calculate product of even elements

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,p;
p=1;
printf("\n enter array=");
for(i=0; i<=4; i++)
{
    scanf("%d",&a[i]);
}
for(i=0; i<=4; i++)
{
    if(a[i]%2==0)
    {
p=p*a[i];
    }
    
}
printf("\n proudct of even elements=%d",p);
}