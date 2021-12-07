//pattern1
//print star
#include<stdio.h>
void main()
{
    
    int r,c;
    for ( r = 4; r >= 1; r--)
    {
        for ( c = 1; c <= r; c++)
    {   
    printf(" %d",c);
    }
        
       printf("\n"); 
    }
    
}