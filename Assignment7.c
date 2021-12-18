//Calculate Grade
#include <stdio.h>
int main()
{
    int m1,m2,m3;
	float per;
	system("cls");
	printf("\nEnter marks of first subjects");
	scanf("%d",&m1);
    printf("\nEnter marks of second subjects");
	scanf("%d",&m2);
    printf("\nEnter marks of third subjects");
	scanf("%d",&m3);
	if (m1>=35 && m2>=35 && m3>=35)
	{       
		per=(m1+m2+m3)*100/300;
		printf("\nResult= Pass & Percent =%.2f",per);
		if (per>=75)
		   printf("\nDivision = Distinction");
		else if (per>=60)
			printf("\nDivision = First");
		     else if (per>=45)
			     printf("\nDivision = Second");
			  else
			     printf("\nDivision = Third");
	}
	else
		printf("\nResult= Fail");

    return 0;
}