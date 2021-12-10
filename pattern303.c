/*    55555
       4444
        333
         22
          1   */  
#include <stdio.h>
int main()
{
    int h,sp,n;
    for ( h = 5; h >= 1; h--)
    {
        for ( sp = 0; sp <= 40-h; sp++)
        {
            printf(" ");
        }
        for ( n = 1; n <= h; n++)
        {
            printf("%d",h);
        }
        printf("\n");
    }
    
    
    return 0;
}      