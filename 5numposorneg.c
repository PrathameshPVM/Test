/*Write a C program that read 5 numbers and counts the number of positive
 numbers and negative numbers*/
 #include <stdio.h>
int main() 
{
	system("cls");
	int n1,n2,n3,n4,n5,p,n, pos=0, neg=0;
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
	if (n1>0)
	{
		pos=pos+1;
	}
	else
	{
		neg=neg+1;
	}
	if (n2>0)
	{
		pos=pos+1;
	}
	else
	{
		neg=neg+1;
	}
	if (n3>0)
	{
		pos=pos+1;
	}
	else
	{
		neg=neg+1;
	}
	if (n4>0)
	{
		pos=pos+1;
	}
	else
	{
		neg=neg+1;
	}
	if (n5>0)
	{
		pos=pos+1;
	}
	else
	{
		neg=neg+1;
	}
	
    

	printf("Number of positive numbers: %d\n", pos);
	printf("Number of negative numbers: %d\n",neg);
	
	return 0;
}