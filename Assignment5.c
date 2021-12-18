//if else if 
//greater no
#include <stdio.h>
int main()
{
    int num1,num2;
	system("cls");
	printf("\nEnter any two numbers");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
		printf("\n%d is greater",num1);
	else
		printf("\n%d is greater",num2);

    return 0;
}