//write a program to enter n digit number and check it is armstrong or not
#include<stdio.h>
void main ()
{
    system("cls");
    int num,s,d1,n1;
    
    printf("Enter n digit number to check armstrong value :");
    scanf("%d",&num);
    n1=num;
    s=0;
    while (num>0)
    {
        d1=num%10;
        s=s+(d1*d1*d1);
        num=num/10;
    
    }
    if (n1==s)
    {
        printf("It is armstrong number");
    }
    else
    {
        printf("It is not armstrong number");
    }
    
}