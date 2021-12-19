#include <stdio.h>
int main()
{
    int i,n,s=0;
	float avg;
	system("cls");
	for(i=1;i<=10;i++)
	{
		printf("\nEnter any number");
		scanf("%d",&n);
		s=s+n;
	}
		printf("\nThe sum of ten numbers=%d, average=%f",s,s/10.0);

    return 0;
}