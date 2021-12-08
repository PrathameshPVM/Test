#include<stdio.h>
void main()
{
    char r,c,a='A';
    //printf("%d=%c",a,a);
    for ( r = 'A'; r <= 'D' ; r++)
    {
       for ( c = 'A'; c <= r; c++)
       {
           printf("%c",r);
       }
       printf("\n");
    }
    
    
}