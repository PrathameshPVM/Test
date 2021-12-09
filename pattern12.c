#include<stdio.h>
void main()
{
    system("cls");
    int h,sp,str;
    
   
    for ( h = 1; h <= 9 ; h++)
    {
       for ( sp = 0; sp <= 40-h; sp++)
       {
           printf(" ");
        
       }
       for ( str = 1; str <= h; str++)
       {
           printf(" %d",str);
       
       }
       
       printf("\n");
    }
    
    
} 