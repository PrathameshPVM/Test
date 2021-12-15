//create a 2 dimension array of 3 rows and 3 column and initilize it
#include<stdio.h>
void main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},r,c;
    for ( r = 0; r < 3; r++)
    {
        for ( c = 0; c < 3; c++)
        {
            printf("%d\t",a[r][c]);
        }
        printf("\n");
    }
    
}