/*WAP to collect 5 array element and display on the screen*/
#include <stdio.h>
int main()
{
    system("cls");
    int a[5],c=1;
    printf("Enter 5 Elements :");
    for (int i = 0; i <= 4; i++)
    {
        
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <= 4; i++)
    {

        printf("Elements %d = %d\n",c,a[i]);
        c++;
    }
    
    
    return 0;
}