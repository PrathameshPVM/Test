//Volume of a Cone = V = ⅓ × πr2h

#include<stdio.h>
void main()
{
    system("cls");
    float v,pi=3.14,r,h;
    printf("Enter the radius of cone=");
    scanf("%f",&r);
    printf("Enter the height of cone=");
    scanf("%f",&h);
    v=0.33*pi*(r*r)*h;

    printf("The Volume of cone is=%f",v);
}