#include<stdio.h>
void si(float,float,float);
int main()
{       float p,n,r;
	
	printf("\nEnter P,N,R");
	scanf("%f%f%f",&p,&n,&r);
	
	si(p,n,r);
	
}

void	si(float p,float n,float r)
	{   float s;
	    s=(p*n*r)/100;
	    printf("The SI = %.2f",s);
	}
