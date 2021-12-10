/*        A
        A B
      A B C   */  
#include <stdio.h>
int main()
{
    int h,n,sp;
    for ( h = 65; h <= 67; h++)
    {
        for ( sp = 0; sp <= 100-h; sp++)
        {
            printf(" ");
        }
        for ( n = 65; n <= h; n++)
        {
            printf("%c",n);
        }
        printf("\n");
    }
    
    
    return 0;
}      