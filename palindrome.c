
#include<stdio.h>
void main ()
{
    system("cls");
    int num,n1,n2,n3,rev,orgnum;
    printf("Enter 3 digit number to check if it is a palindromic number= ");
    scanf("%d",&num);
    orgnum=num;

    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;

    rev=n1*100+n2*10+n3;
    if (orgnum==rev)
    {
        printf("Entered 3 digit number is palandromic number");
    }
    else
    {
        printf("Entered 3 digit number is not palandromic number");
    }
}