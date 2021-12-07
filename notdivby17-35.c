/*write a c program to calculate the sum of all number not divisible by 17
between two given integers numbers*/
#include<stdio.h>
void main()
{
    system("cls");
    int i,a,b,add=0;
    printf("Enter two numbers to find number not divisible in between :");
    scanf("%d%d",&a,&b);
    for ( i = a; i <= b; i++)
    if ((i%17)!=0)
    {
        add=add+i;
        
        
    }
    printf("The Addition of numbers not divisible by 17 in betweem %d and %d is :%d",a,b,add);
    
    
}