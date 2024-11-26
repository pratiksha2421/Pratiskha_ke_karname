// WAP to input 5 elements into an array and print only perfect element of array using function//

#include<stdio.h>
#include<conio.h>
void perfect(int);
void main()
{
int a[5],i;
printf("\n enter array=");
for(i=0;i<=4;i++)
{
    scanf("%d",&a[i]);
}
for(i=0; i<=4; i++)
{
    perfect(a[i]);
}
}
void perfect(int p)
{
    int i,s;
    s=0;
   for(i=0; i<=p; i++)
   {
       if(p%i==0)
       {
        s=s+i;
       }
   } 
if(s==p)
{
    printf("\n %d is a perfect number",p);
}
else
{
    printf("\n %d is not a perfect number",p);
}
}