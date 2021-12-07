//pattern1
//print star
#include<stdio.h>
void main()
{
    system("cls");
    int r,c;
    for ( r = 1; r <= 4; r++)
    {
        for ( c = 1; c <= r; c++)
    {   
    printf(" %d",c);
    }
        
       printf("\n"); 
    }
    
}