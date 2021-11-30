//Area of Triangle = A = ½ × b × h

#include<stdio.h>
void main ()
{
    system("cls");
    int a,b,h;
    printf("Enter the Value of base of triangle=");
    scanf ("%d",&b);
    printf("Enter the Value of height of triangle=");
    scanf ("%d",&h);
    a=0.5*b*h;

    printf("The Area of Triangle is=%d",a);
    
}