// WAP to input 5 elements into an array and print only armstrong element of array using function//

#include<stdio.h>
#include<conio.h>
#include<math.h>

int check(int);
int main()
{
    int array[5],k;
      for (int i = 0; i < 5; i++)
    {
        printf("%d : Index me Your Number: ",i);
        scanf("%d",&array[i]);
    }
    for (int  i = 0; i < 5; i++)
    {
    k=check(array[i]);
    if (k == array[i])
    {
        printf("\n %d is an Armstrong number.", array[i]);
    }
    }
}

int check(int x)
{
    int  remainder, result, digits,j,i;

    digits=0;
        for (i = x; i > 0; i = i / 10)  // total number of digits  

    {
        digits=0;
        digits++;
    }

    for (j = x ; j> 0 ; j= j/ 10)   //digit
   
     {
        remainder = j % 10;  
        result =result+ pow(remainder, digits);
    }
    return(result);
}
