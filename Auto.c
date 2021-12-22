//Example of auto storage class
#include <stdio.h>
void displaynum();
int main()
{
    auto int num1=20;
    int num2=26;//by default it is auto
    printf("\n num1 = %d",num1);
    printf("\n num2 = %d",num2);
}
void displaynum()
{
   // printf("\n num1 = %d",num1);//Error since num1 and num2 is declared auto
    //printf("\n num1 = %d",num1);
}