/*Write a C program that reads three floating values and check if it is 
possible to make a triangle with them. Also calculate the perimeter of 
the triangle if the said values are valid.
Triangle Formulae=first two sides is greater than 3rd sides*/
#include <stdio.h>
int main() 
{
    system("cls");
	float  x, y, z, P;
    printf("Input the first number: "); 
    scanf("%f", &x);
    printf("Input the second number: ");
    scanf("%f", &y);
    printf("Input the third number: ");
    scanf("%f", &z);

    if(x < (y+z) && y < (x+z) && z < (y+x)) 
     {  
	 P = x+y+z;
	 printf("Perimeter  = %f\n", P);	 
	 
    }
    else
    {
    	printf("Not possible to create a triangle..!");
	}
}
