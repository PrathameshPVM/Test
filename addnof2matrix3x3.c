// wap to do addtion of 2 matrix 3*3
#include <stdio.h>
int main()
{
    int a1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int a2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int a3[3][3],r,c;
    for ( r = 0; r < 3; r++)
    {
        for ( c = 0; c < 3; c++)
        {
          a3[r][c]= a1[r][c]+ a2[r][c];
        }
        
    }
    for ( r = 0; r < 3; r++)
    {
        for ( c = 0; c < 3; c++)
        {
            printf("%d\t",a3[r][c]);
        }
        printf("\n");
    }
    
    return 0;
}