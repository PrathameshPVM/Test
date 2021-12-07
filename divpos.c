//Write a c program that reads two number and divive the first number by 
//second number.if division is not possible print "Division not possible"
#include<stdio.h>
void main ()
{
    system("cls");
    int n1,n2,r;
    printf("Enter number 1 :");
    scanf("%d",&n1);
    printf("Enter number 2 :");
    scanf("%d",&n2);
    if (n2%n1==0)
    {
        printf("Division is possible");
    }
    
     if ((n2%n1)!=0)
    {
        printf("Division not possible");
    }
    
}