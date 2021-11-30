//Surface Area of Cube = S = 6a2
// Where ‘a’ is the length of the sides of the Cube

#include<stdio.h>
void main ()
{
    system("cls");
    int s,a;
    printf("Enter the length of the sides of the cube=");
    scanf("%d",&a);

    s=6*a*a;

    printf("The value of surface area of cube=%d",s);
}