//multiplication of 2 matrix
#include <stdio.h>
int main()
{
    int a1[2][2]={{1,2},{3,4}};
    int a2[2][2]={{5,6},{7,8}};
    int a3[2][2],r,c;
    for ( r = 0; r < 2; r++)
    {
        for ( c = 0; c < 2; c++)
        {
            a3[r][c]=a1[r][c]*a2[r][c];
        }
        
    }
    for ( r = 0; r < 2; r++)
    {
        for ( c = 0; c < 2; c++)
        {
            printf("%d\t",a3[r][c]);
        }
        printf("\n");
    }
    

    return 0;
}