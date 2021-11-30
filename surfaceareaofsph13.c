//Surface Area of a Sphere = S = 4πr2

#include<stdio.h>
void main()
{
    system("cls");
    float s,pi=3.14,r;
    printf("Enter the value of radius=");
    scanf("%f",&r);

    s=4*pi*r*r;

    printf("The Surface Area of Sphere=%f",s);
}