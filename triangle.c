/*Write a C program that reads three floating values and check if it is 
possible to make a triangle with them. Also calculate the perimeter of 
the triangle if the said values are valid.
Triangle Formulae=sum of first two sides is greater than 3rd sides*/
#include <stdio.h>
int main() 
{
    system("cls");
	float  a, b, c, P;
    printf("Input the first number: "); 
    scanf("%f", &a);
    printf("Input the second number: ");
    scanf("%f", &b);
    printf("Input the third number: ");
    scanf("%f", &c);

    if(a<(b+c) && b<(a+c) && c<(b+a)) 
     {  
	 P = a+b+c;
	 printf("Perimeter  = %f\n",P);	 
	 
    }
    else
    {
    	printf("Triangle not possible");
	}
}
