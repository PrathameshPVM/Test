
/* EDCBA
   EDCB
   EDC
   ED
   E */
   #include <stdio.h>
  int main()
  {
      system("cls");
      char r,c,a;
      for ( r = 'A'; r<='E'; r++)    
      {
          for ( c = 'E'; c >= r; c--)
          {
              
              printf("%c",c);
          }
          printf("\n");
      }
      
      return 0;
  }
   