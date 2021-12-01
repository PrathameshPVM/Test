//reverse 5 digit number
#include<stdio.h>
void main ()
{
    system("cls");
    int num,n1,n2,n3,n4,n5,rev;
    printf("Enter 5 digit number you want to reverse= ");
    scanf("%d",&num);

    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    n5=num%10;


    rev=n1*10000+n2*1000+n3*100+n4*10+n5;

    printf("The reverse of five digit number you entered is= %d",rev);

    return 0;
}