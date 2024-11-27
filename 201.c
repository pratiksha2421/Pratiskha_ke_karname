// WAP to input a number and calculate number of digits using function with return value 
 
 #include<stdio.h>
#include<conio.h>
int count(int);
void main()
{
int a,c;
printf("\n enter a number=");
scanf("%d",&a);
c= count(a);
printf("\n number of digit of %d=%d",a,c);
}
int count(int x)
{
int i,c;
c=0;
for(i=x; i>0; i=i/10)
{
    c++;
}
return(c);
}
