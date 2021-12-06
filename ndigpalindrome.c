//n digit palindrome check
#include <stdio.h>
int main() 
{
    system("cls");
    int num,s,d1,n1;
    printf("Enter n digit number to check palandromic number :");
    scanf("%d",&num);
    n1=num;
    s=0;
    while (num>0)
    {
        d1=num%10;
        s=s*10+d1;
        num=num/10;
    
    }
    
    if (n1 == s)
    {
        printf("The num is a palindrome.");
    }
    else
       { 
           printf("The num is not a palindrome.");
       }

    return 0;
}