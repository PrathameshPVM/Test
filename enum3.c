#include <stdio.h>
enum month { Jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec };

int main() 
{
	enum month m;
	m=apr;
	printf("\n month : %d",m);
}
