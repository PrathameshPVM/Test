//Write a C program that reads two integers and checks if they are multiplied or not.

#include <stdio.h>

int main() 
{
    system("cls");
	int  a, b;
    printf("Input the first number: "); 
    scanf("%d", &a);
    printf("Input the second number: ");
    scanf("%d", &b);
  
    if(a > b) 
	{
		int n;
		n = a;
		a = b;
		b = n;
	}
	
	if((b % a)== 0) 
	{
		printf("multiplied");
	} 
	else 
	{
		printf("Not Multiplied\n");
	}
	
	return 0;
}