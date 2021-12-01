//3 digit num check armstrong number
#include<stdio.h>
void main ()
{
    system("cls");
    int num,n1,n2,n3,num1,orgnum;
    printf("Enter 3 digit number if it is armstrong number= ");
    scanf("%d",&num);
    orgnum=num;

    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;

    num1=(n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3);

    if (orgnum==num1)
    {
        printf("Entered number is armstrong number");
    }
    else
    {
        printf("Entered number is not an armstrong number");
    }
    return 0;
    
}