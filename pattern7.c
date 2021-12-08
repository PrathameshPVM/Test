/*A 
  A B 
  A B C 
  A B C D*/
  #include<stdio.h>
  void main()
  {
      int r,c;
      for ( r = 'A'; r <= 'B'; r++)
      {
          for ( c = 'A'; c <= r; c++)
          {
             printf("%d",c);
          }
          
          
      }
      
  }