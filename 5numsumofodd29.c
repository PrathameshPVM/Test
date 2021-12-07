/*Write a C program that read 5 numbers and sum of all odd values 
between them.*/
#include <stdio.h>
int main() 
{
    system("cls");
	int n1,n2,n3,n4,n5,add=0;
	
	printf("Input the first number: "); 
    scanf("%d", &n1);
    printf("Input the second number: "); 
    scanf("%d", &n2);
    printf("Input the third number: "); 
    scanf("%d", &n3);
	printf("Input the fourth number: "); 
    scanf("%d", &n4);
    printf("Input the fifth number: "); 
    scanf("%d", &n5);
	
	if(n1%2!= 0) 
	{
	add=add+n1;
		
    }
    if(n2%2!= 0) 
	{
	add=add+n2;
		
    }
    if(n3%2!= 0) 
	{
	add=add+n3;
		
    }
    if(n4%2!= 0) 
	{
	add=add+n4;
		
    }
    if(n5%2!= 0) 
	{
	add=add+n5;
		
    }
   	printf("Sum of all odd values: %d", add);
	
	return 0;
}