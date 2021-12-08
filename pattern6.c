/*1
23
456
78910*/
#include<stdio.h>
void main()
{
    system("cls");
    int r,c,n=1;
    for ( r = 1; r <= 4; r++)
    {
        for ( c = 1; c <= r; c++)
    { 
         
    printf(" %d",n++);
    
    }
        
       printf("\n"); 
    }
    
}