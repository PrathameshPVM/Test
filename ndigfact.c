//write a program to enter n digit number
#include<stdio.h>
void main ()
{
    system("cls");
    int i,num,f=1;
    
    printf("Enter n digit number to check its factorial :");
    scanf("%d",&num);
    i=1;
    
    while (i<=num)
    {
       f=f*i;
       i++;
    
    }
    printf("%d",f);
    
}