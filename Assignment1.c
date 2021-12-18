/*  to calculate area & circumference    */
#include <stdio.h>
int main()
{
    system("cls");
    float r,a,c;
    printf("Enter Radius to find area and circumference of circle :");
    scanf("%f",&r);
    c=2*3.14*r;
	a=3.14*r*r;
	printf("\nCircum=%f",c);
	printf("\nArea=%f",a);

    return 0;
}
