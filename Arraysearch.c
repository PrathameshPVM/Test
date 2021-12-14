//search in array
#include<stdio.h>
void main()
{
    system("cls");
    int a[5]={1,2,3,4,5},n,i;
    printf("Enter number to search :");
    scanf("%d",&n);
    for ( i = 0; i < 5; i++)
    {
        if (n==a[i])
        {
            printf("Entered number is %d is at position %d",n,i+1);
            break;
        }
    
        
}
if (n!=a[i])
        
        {
            printf("Entered number not found");
        }
    
}