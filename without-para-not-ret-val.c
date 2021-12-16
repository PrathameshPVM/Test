//function without parameters and not returning a value
//create a function factorial to accept a number and print factorial of a number
#include<stdio.h>
void fact(void);
int main()
{
    system("cls");
    
    fact();

    return 0;
}
void fact(void)
{
    int n,r=1;
    printf("Enter a number to find factorial :");
    scanf("%d",&n);
    for ( n = n; n >0; n--)
    
    {
        r=r*n;
    }
    printf("\nFactorial = %d",r);
    
}