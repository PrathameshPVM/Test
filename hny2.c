
#include<stdio.h>
void line(int,char);
int main()
{	

	printf("\n\t\tHAPPY NEW YEAR");
	line(44,'*');
	printf("\n\t\tHAPPY");
	line(5,'&');  
	printf("\n\t\tNEW");
	line(3,'$');
	printf("\n\t\tYEAR");
	line(4,'@');
	
}
	

  void  line(int n,char c)
	{	int i;
		printf("\n\t\t");
		for(i=1;i<=n;i++)
		printf("%c",c);
	}

