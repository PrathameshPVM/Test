//Kinetic Energy
#include<stdio.h>
void main ()
{
    system("cls");
    float e,m,v;
    printf("Enter the Value of mass of body=");
    scanf ("%f",&m);
    printf("Enter the Value of velocity=");
    scanf ("%f",&v);
    
    e=(0.5)*(m)*(v*v);

    printf("The Value of kinetic energy=%f",e);
    
}