/*WAP to collect 5 array element and count the even and odd element*/
#include <stdio.h>
int main()
{
    system("cls");
    int a[10],c=1,Ecount=0,Ocount=0,i;
    printf("Enter 10 elements to count even odd :");
    for (int i = 0; i <= 9; i++)
    {
        
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <= 9; i++)
    {
       /* if (a[i]%2==0)
        {
            
            printf("Even Elements %d = %d\n",c++,a[i]);
        }
        else if (a[i]%2!=0)
        {
            
            printf("Odd Elements %d = %d\n",c++,a[i]);
        }*/
    
        printf("\n");
        if (a[i]%2==0)
        {
            Ecount++;
            
        }
        else
        
        {
            Ocount++;
            
        } 
    }
        printf("Total Even Elements are %d\n",Ecount);
        printf("Total Odd Elements are %d\n",Ocount);

    
        

    
    return 0;
}