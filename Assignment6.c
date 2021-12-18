//profit and loss
#include <stdio.h>
int main()
{
    float sp,cp;
	system("cls");
	printf("\nEnter costprice and selling price :");
	scanf("%f%f",&cp,&sp);
	if(cp<sp)
		printf("\nProfit amount is Rs.%.2f",sp-cp);
	else
		printf("\nLoss amount is Rs.%.2f",cp-sp);	

    return 0;
}