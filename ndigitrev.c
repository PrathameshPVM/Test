//write a program to enter n digit number and reverse it
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
        s=s*10+d1;
        num=num/10;
    
    }
    printf("%d",s);
    
}