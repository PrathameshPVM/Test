/*EEEEE
  DDDDD
  BBBBB
  AAAAA*/
  #include <stdio.h>
  int main()
  {
      char r,c,a='A';
      for ( r = 'E'; r >= 'A'; r--)
      {
        for ( c = 'E'; c >= 'A'; c--)
        {
            printf("%c",r);
        }
        printf("\n");
      }
      
      return 0;
  }