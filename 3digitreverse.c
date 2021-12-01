//3 digit reverse 
#include<stdio.h>
void main ()
{
    system("cls");
    int num,n1,n2,n3,rev;
    printf("Enter 3 digit number you want to reverse= ");
    scanf("%d",&num);

    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;

    rev=n1*100+n2*10+n3;

    printf("The reverse of three digit number you entered is= %d",rev);

    return 0;
}