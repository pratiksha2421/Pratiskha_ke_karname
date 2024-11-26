#include<stdio.h>
#include<conio.h>
#include<math.h>
void series(int,int);
void main()
{
int x,n;
printf("\n enter x,n value=");
scanf("%d%d",&x,&n);
series(x,n);
}
void series(int a,int b)
{
    int i,n,p;
    float s;
    s=0.0;
    for(i=1; i<=b; i++)
    {
        p=i;
        a=pow(p,b);
        b=i;
        s=s+(a/b); 
        
    }
    printf("\n sum =%f",s);
}