/*WAP to enter 5 array elements and perform the addition of sum of all elements*/
#include <stdio.h>
int main()
{
    system("cls");
    int a[5],c=1,s=0;
    printf("Enter 5 Elements :");
    for (int i = 0; i <= 4; i++)
    {
        
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        s=a[i]+s;
        
        
    }
    printf("The sum of entered 5 elements is %d\n",s);
    
    return 0;
}