//The total surface area of Cylinder = 2πr(r + h)

#include<stdio.h>
void main()
{
    system("cls");
    float a,pi=3.14,r,h;
    printf("Enter the radius of cylinder=");
    scanf("%f",&r);
    printf("Enter the height of cylinder=");
    scanf("%f",&h);

    a=(2*pi*r)*(r+h);

    printf("The total surface area of cylinder=%f",a);
}