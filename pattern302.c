/*    ABCDE
      ABCD
      ABC
      AB
      A   */  

   #include <stdio.h>
  int main()
  {
      system("cls");
      char r,c,a;
      for ( r = 'E'; r>='A'; r--)    
      {
          for ( c = 'A'; c <= r; c++)
          {
              
              printf("%c",c);
          }
          printf("\n");
      }
      
      return 0;
  }
   