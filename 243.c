// WAP to input a string calculate nuumber of vowels

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50],ch;
int i,l,c;
c=0;
printf("\n enter a string =");
gets(a);
l= strlen(a);
for(i=0; i<l; i++)
{
    ch=a[i];
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        c++;
    }

}
    printf("\n number of vowels=%d",c);
}