
/* EEEEE
   DDDD
   CCC
   BB
   A */
   #include <stdio.h>
  int main()
  {
      char r,c,a;
      for ( r = 'E'; r>='A'; r--)    
      {
          for ( c = 'A'; c <= r; c++)
          {
              
              printf("%c",r);
          }
          printf("\n");
      }
      
      return 0;
  }
   