#include <stdio.h>
int main()
{
    int i;
    for ( i = 1; i <= 3; i++)
    {
        static int num1=5;
        int num2=10;
        num1++;
        num2++;
        printf("\n value of static variable num1=%d",num1);
        printf("\n value of static variable num1=%d",num2);

    }
    
    return 0;
}