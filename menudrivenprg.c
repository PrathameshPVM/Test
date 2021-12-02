//Write a menue driven program for arithmetic operation
#include<stdio.h>
void main()
{
    system("cls");
    int a,b,res;
    char choice;
    printf("PRESS\n + for ADDITION\n - for SUBSTRACTION\n * for MULTIPLICATION\n / for DIVISION\n");
    scanf("%c",&choice);

    if (choice=='+')
    {
        printf("Enter two numbers for ADDITION :");
        scanf("%d%d",&a,&b);
        res=a+b;
        printf("The ADDITION of two number is :%d ",res);
    }
    else if (choice=='-')
    {                           
        printf("Enter two numbers for SUBSTRACTION :");
        scanf("%d%d",&a,&b);
        res=a-b;
        printf("The SUBSTRACTION of two number is :%d ",res);
    }
    else if (choice=='*')
    {
        printf("Enter two numbers for MULTIPLICATION :");
        scanf("%d%d",&a,&b);
        res=a*b;
        printf("The MULTIPLICATION of two number is :%d ",res);
    }
    else if (choice=='/')
    {
        printf("Enter two numbers for DIVISION :");
        scanf("%d%d",&a,&b);
        res=a/b;
        printf("The DIVISION of two number is :%d ",res);
    }
    else
    {
        printf("You have entered incorrect choice");
    }
    return 0;
}