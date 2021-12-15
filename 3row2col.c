//2 create a 2 dimension array of 3 rows and 2 column to accept  rno and marks from the user.
#include <stdio.h>
int main()
{
    int a[3][2],r,c;
    for ( r = 0; r < 3; r++)
    {
        for ( c = 0; c < 2; c++)
        {
            printf("Enter Roll no and Marks");
            scanf("%d",&a[r][c]);
        }
    }
        for ( r = 0; r < 3; r++)
        {
            for ( c = 0; c < 2; c++)
            {
                printf("%d\t",a[r][c]);
            }
            printf("\n");
        }
        
    
    
    
    return 0;
}