//greater number
#include <stdio.h>
int main()
{
    int i,n=0,g=-32767,b=32767;
	system("cls");
	for(i=1;i<=10;i++)
	{
		printf("\nEnter a number");
		scanf("%d",&n);
		if(n>g)
			g=n;
		if(n<b)
		      b=n;
	}
	printf("\nThe greatest no=%d",g);
	printf("\nThe smallest no=%d",b);

    return 0;
}