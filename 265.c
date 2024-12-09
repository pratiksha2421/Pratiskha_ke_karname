// WAP to input number of quantity , amount and product name of 5 product and print these records using union.

#include <stdio.h>
#include <conio.h>
union product
{
    char name[50];
    int quantity;
    float amount;
} p[5];
void main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("\n enter product name=");
        scanf("%s", &p[i].name);
        printf("\n product name %d=%s", i, p[i].name);
        printf("\n enter quantity=");
        scanf("%d", &p[i].quantity);
        printf("\n quantity %d=%d", i, p[i].quantity);
        printf("\n enter amount=");
        scanf("%f", &p[i].amount);
        printf("\n amount %d=%f", i, p[i].amount);
    }
}