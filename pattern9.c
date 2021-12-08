#include<stdio.h>
void main()
{
    system("cls");
    int r,c;
    char a='a';
    for ( r = 1; r < 5; r++)
    
    {
        for ( c = 1; c <= 5; c++)
    {
        if (r%2==0)
        {
            printf("a");
        }
        else
           
    printf("%d",c);
    }
    
       printf("\n"); 
    }
    
}