/*Write a C program to calculate a bike’s average consumption 
from the given total distance (integer value) traveled (in km) 
and spent fuel (in liters, float number – 2 decimal point).*/

#include <stdio.h>
int main() 
{
    system("cls");
    int x;
	float y,avg;
	printf("Input total distance in km: ");
	scanf("%d",&x);
	printf("Input total fuel spent in liters: ");
	scanf("%f", &y);
    avg=x/y;
	printf("Average consumption (km/lt) %f ",avg);
	
	return 0;
}