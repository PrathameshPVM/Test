/*        1
        1 2
      1 2 3   */  
#include <stdio.h>
int main()
{
    int h,sp,n;
    for ( h = 1; h <= 3; h++)
    {
        for ( sp = 0; sp <= 40-h; sp++)
        {
            printf(" ");
        }
        for ( n = 1; n <= h; n++)
        {
            printf("%d",n);
        }
        printf("\n");
    }
    
    
    return 0;
}      