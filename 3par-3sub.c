//create a function result with 3 int parmeters to accept 3 subject marks , 
//calculate and display total, per and grade
#include <stdio.h>



void r(int p,int c, int m)
{
    int t;
    float per;
    t=p+c+m;
    
    printf("\nTotal marks in Physics,chemistry and maths is %d",t);
    per=(float)t/300.0f*100.0f;
    printf("\nTotal percentage is %0.2f\n",per);
    if(per >= 75)
	{
		printf("\n grade : distinction");
	}
	else if(per >= 60 && per < 75)
	{
		printf("\n grade : first");
	}
	else 
	{
		printf("\n grade : fail");
	}
	
}
int main()
{
    system("cls");
    int p,c,m;
    printf("Enter marks of physics = ");
    scanf("%d",&p);
    printf("\nEnter marks of Chemistry =");
    scanf("%d",&c);
    printf("\nEnter marks of maths =");
    scanf("%d",&m);
    r(p,c,m);
    return 0;
}
