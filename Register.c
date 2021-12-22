// example of register storage class
#include <stdio.h>
void displaynum();
int main()
{
    register int num1 = 20;
    int num2; // by default it is auto
    printf("\n num = %d", num1);
    printf("\n num = %d", num2);
}
void displaynum()
{
    // printf("\n num1 = %d",num1); //error since num1 and num2 is declared auto
    // printf("\n num2 = %d",num2);
}
