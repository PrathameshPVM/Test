//swap no
#include <stdio.h>
int main()
{
    system("cls");
    int a,b,x;
    printf("Enter first number a= ");
    scanf("%d",&a);
    printf("Enter second number b= ");
    scanf("%d",&b);
    x=a;
    a=b;
    b=x;
    printf("First number a= %d",a);
    printf("\nSecond number b= %d",b);
    return 0;
}