// WAP to input 5 elements into an array and print only prime element of array using function//

#include<stdio.h>
#include<conio.h>
int prime(int);  // Declare
void main()
{
int a[5],i;
printf("\n enter array=");
for(i=0; i<=4; i++)
{
    scanf("%d",&a[i]);
}
for(i=0; i<=4; i++)
{
     prime(a[i]);
}
}  


int prime(int p) // define
{
    int i,c;
    c=0;
    for(i=1; i<=p; i++)
    {
            if(p%i==0)
      {
        c++;
      }
    }
    if(c==2)
{
    printf("\n%d is a prime number",p);
}
}


