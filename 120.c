#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s,a;
a=3;
s=0;
printf("\n enter the number of terms=");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
s=s+a;
a=a*2;
}
printf("\n sum of the series 3+6+12+24+ - - - - - for %d term= %d",n,s);
}


