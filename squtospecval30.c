/*write a c program to find and print the square of each
one of the even value from 1 to specified value*/
#include<stdio.h>
void main()
{
    int i,n,r;
    printf("Enter a number :");
    scanf("%d",&n);
    for ( i= 0; i <= n; i++)
    {
        if (i%2==0)
        {
            r=i*i;
        printf("%d\n",r);
        }
        
        
    }
    
}