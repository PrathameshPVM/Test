#include <stdio.h>
#include<string.h>
union data
{
    int num1;
    float num2;
    char ch[10];
};

int main()
{
    union  data d1;
    d1.num1=22;
    d1.num2=202.123f;
    strcpy(d1.ch,"amar");

    printf("\n num1 =%d",d1.num1);
    printf("\n num2 = %f",d1.num2);
	printf("\n ch = %s",d1.ch);

    return 0;
}