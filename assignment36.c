/*write a c program to find all numbers which divding it by 7 and the 
remender is equal to 2 or 3  between given two integer*/
#include<stdio.h>
void main()
{
    system("cls");
    int i,a,b,add=0;
    printf("Enter two numbers to find number divisible by 7 in between :");
    scanf("%d%d",&a,&b);
    for ( i = a; i <=b ; i++)
    if (i%7==2 || i%7==3)
    {
       printf("%d\n",i);
    }
    
    
}