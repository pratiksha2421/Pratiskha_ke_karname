// WAP to input a house number , city name and pincode of 5 persons and display these values using structure.

#include<stdio.h>
#include<conio.h>
struct house
{
    char name[50];
    int number, pincode;
}p[5];
void main()
{
int i;
for(i=1; i<=5; i++)
{
printf("\n enter city name=");
scanf("%s",&p[i].name);
printf("\n enter house number=");
scanf("%d",&p[i].number);
printf("\n enter pincode=");
scanf("%d",&p[i].pincode);
}
for(i=1; i<=5; i++)
{
    printf("\n city name of %d=%s",i,p[i].name);
    printf("\n house number %d=%d",i,p[i].number);
    printf("\n pincode %d=%d",i,p[i].pincode);
}
}