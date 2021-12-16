//addition of two numbers using user define function
#include<stdio.h>
float addition(int n1,int n2);
int main() {
		
		int num1,num2;
		float result;
	printf("enter 2 number "); 
	scanf("%d%d",&num1,&num2);
result = addition(num1,num2);
printf("\n addtion of 2 no %f",result);
	
}

float addition(int n1,int n2)
{
		float res=n1+n2;
		return res;
	
}
