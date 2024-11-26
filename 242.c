//WAP to input a string and calculate total number of upper case and lower case

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50],ch;
int i,lc,uc,l;
printf("\n enter string=");
gets(a);
lc=0;
uc=0;
l=strlen(a);
for(i=0; i<l;i++)
{
    ch=a[i];
    if(ch>='A'&&ch<='Z')
    {
        uc++;
    }
    else if(ch>='a'&&ch<='z')
    {
     lc++;
    }
}
printf("\n number of uc=%d",uc);
printf("\n number of lc=%d",lc);
}