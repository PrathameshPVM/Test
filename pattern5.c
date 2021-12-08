/*1
  10
  101
  1010*/
  #include<stdio.h>
void main()
{
    
    int r,c;
    for ( r = 1; r <= 4; r++)
    {
        for ( c = 1; c <= r; c++)
    {   
    printf(" %d",c%2);
    }
        
       printf("\n"); 
    }
    
}