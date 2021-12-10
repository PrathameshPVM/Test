/*        *
        * *
      * * *   */
     #include <stdio.h>
     int main()
     {
         system("cls");
         int h,sp,str;
         for ( h = 1; h <= 3; h++)
         {
             for ( sp = 0; sp <= 40-h; sp++)
             {
                 printf(" ");
             }
                 for ( str = 1; str <= h; str++)
                
                 {
                     printf("*");
                 }
                 
             printf("\n");
             
         }
         
         return 0;
     }
      