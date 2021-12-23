//create a union data with members num1 of int type , num2 of float type , ch of char type
#include <stdio.h>
union data
{
    int num1;
    float num2;
    char ch;
};

int main()
{
    union data d1;
    d1.num1=22;
    printf("\n num1 = %d",d1.num1);
    d1.num2=202.123f;
    printf("\n num = %f",d1.num2);
    printf("\n num1 = %d",d1.num1);//garbaage value becausse it is replaced by num2

    d1.ch='z';
    printf("\n ch = %c",d1.ch);
    
    return 0;
}