//  WAP to input a string and check it is palindrome  or not without using strrev.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50],b[50];
int i,l,c;
printf("\n enter a string=");
gets(a);
l=strlen(a);
for(i=0; i<l; i++)
{
    b[i]=a[l-i-1];
}
b[l]='\0';
c=strcmp(a,b);
if(c==0)
{
    printf("\n it is palindrome string");
}
else{
    printf("\n it is not palindrome string");
}
}