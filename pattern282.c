/*55555
  44444
  33333
  22222
  11111*/
  #include <stdio.h>
  int main()
  {
      int r,c;
      for ( r = 5; r >= 1; r--)
      {
          for ( c = 5; c >= 1; c--)
          {
              printf("%d",r);
          }
          printf("\n");
      }
      
      return 0;
  }