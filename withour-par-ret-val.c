//function without parameters and  returning a value
//create a function factorial to accept a number and calculate and return factorial of a number
#include<stdio.h>
int fact(void);
int main()
{
    system("cls");
    int r;
    r=fact();
    printf("\nFactorial is = %d",r);
    return 0;
}
int fact(void)
{
    int n,r=1,i;
    printf("Enter a number to find factorial :");
    scanf("%d",&n);
    for ( n = n; n > 0; n--)
    {
        r=r*n;
    }
    return (r);

}