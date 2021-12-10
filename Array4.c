/*WAP to enter 10 Array element and display in reverse order*/
#include <stdio.h>
int main()
{
    system("cls");
    int a[10],c=1,d1;
    printf("Enter 10 elements :");
    for (int i = 0; i <= 9; i++)
    {
       scanf("%d",&a[i]);
    }
    for (int i = 9; i >=0; i--)
    {
      
    
        printf("Reverse order of %d = %d\n",c++,a[i]);
    }
    
    return 0;
}