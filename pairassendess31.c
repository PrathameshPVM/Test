/*write a c program to check if two number in a pair is in ascending 
order or descending order*/
#include<stdio.h>
void main()
{
    system("cls");
    int n,d1,d2;
    printf("Enter two numbers in pair :");
    scanf("%d",&n);
    d1=n%10;
    n=n/10;
    
    
    if (n<d1)
    {
        printf("pair is in ascending order");
    }
    else if (n>d1)
    {
        printf("pair is in decending order");
    }
    
    


}