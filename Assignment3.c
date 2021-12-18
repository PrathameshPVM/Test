//to find reverse no.
#include <stdio.h>
int main()
{
    int n,s,d1,n1;
    
    printf("Enter number you want to reverse :");
    scanf("%d",&n);
    n1=n;
    s=0;
    while (n>0)
    {
        d1=n%10;
        s=s*10+d1;
        n=n/10;
    }
    printf("The reverase of entered number is %d",s);
    
    return 0;
}