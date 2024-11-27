// WAP to input two strings and check whether they are equal or not.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50],b[50];
int i,length1, length2,c;
printf("\n enter string 1=");
gets(a);
printf("\n enter string 2=");
gets(b);
length1= strlen(a);
length2= strlen(b);
for(i=0; i<length1; i++)
{
if(length1!=length2)
{
    printf("\n strings are not equal");
}
else{
    c=0; 
    for(i=0; i<length1; i++)
    {
        if(a[i]!=b[i])
        {
            printf("\n strings are not equal");
            c=1;
            break;
        }
    }
}
        if(c==0)
        {
            printf("\n strings are equal ");
        }
        else{
            printf("\n strings are not equal");

        }
        }
    }