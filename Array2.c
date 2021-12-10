//Roll 6 using for loop
#include <stdio.h>
int main()
{
    int a[5],c=1;
    printf("Enter marks of 6 Roll nos :");
    for (int i = 0; i <= 5; i++)
    {
        
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <= 5; i++)
    {

        printf("Marks %d %d\n",c,a[i]);
        c++;
    }
    
    
    return 0;
}