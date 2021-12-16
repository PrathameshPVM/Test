//function with parameters and  returning a value
//create a function factorial wiht one parameter   to accept a number and calculate 
//and return factorial of a number
#include<stdio.h>
int fact(int);
int main()
{
    int n,r=1;
    printf("Enter a number to find factorial :");
    scanf("%d",&n);
    r=fact(n);
    printf("\nFactorial = %d",r);
    return 0;

}
int fact(int n)
{
    int i,r=1;
    for ( i = 1; i <= n; i++)
    {
        r=r*i;
       
    }
  return (r);
}
