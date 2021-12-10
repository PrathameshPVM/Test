/* AAAAA
   BBBB
   CCC
   DD
   E */
   #include <stdio.h>
  int main()
  {
      char r,c,a;
      for ( r = 'A'; r<='E'; r++)    
      {
          for ( c = 'E'; c >= r; c--)
          {
              
              printf("%c",r);
          }
          printf("\n");
      }
      
      return 0;
  }
   