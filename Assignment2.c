/*to calculate male percentage and female percentage*/
#include <stdio.h>
int main()
{
    system("cls");
    int m,f,total;
	float mp,fp;
	printf("\nEnter total number of Males and Females");
	scanf("%ld%ld",&m,&f);
	total=m+f;
	printf("\nTotal males + females = %ld",total);
	mp=m*100/total;
	fp=f*100/total;
	printf("\nMale percentage=%.2f",mp);
	printf("\nFemale percentage=%.2f",fp);
	

    return 0;
}