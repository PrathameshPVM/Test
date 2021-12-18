//greater then 3
#include <stdio.h>
int main()
{
    int m1,m2,m3,g;
	system("cls");
	printf("\nEnter 3 nos");
	scanf("%d%d%d",&m1,&m2,&m3);
	if ((m1>m2) && (m1>m3))
		printf("%d is greatest",m1);
		else if ((m2>m1) && (m2>m3))
			printf("%d is greatest",m2);
	else
	printf("%d is greatest",m3);

    return 0;
}