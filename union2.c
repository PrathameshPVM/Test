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
    d1.ch='z';
    d1.num2=202.123f;

    
    printf("\n num1 = %c",d1.num1);
	printf("\n num2 = %f",d1.num2);
	printf("\n ch = %c",d1.ch);

    
    return 0;
}