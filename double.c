#include<stdio.h>
double power(int x, int n);
int main()
{	int x,n;
	double result;
	
	printf("\nEnter two numbers");
	scanf("%d%d",&x,&n);
	printf("\n%d to the power %d",x,n);
	result=power(x,n);
	printf("power = %.2lf",result);
	
}
	double power(int x, int n)
{
	int i;
	double p=1;
	if(n<0)
	{
		for(i=1;i<=-n;i++)
		p=p*1.0/x;
	}
	else
	{
		for(i=1;i<=n;i++)
		p=p*x; 
	}

	return p;

}
