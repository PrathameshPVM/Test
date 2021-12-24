/* Program on function returning a structure */
#include <stdio.h>
#include<string.h>

struct book {
	char title[10];
	float price;
};
struct book getbook(){
	struct book b1;
	printf("\n enter book title ");
	scanf("%s",&b1.title);
	printf("\n enter price of book");
	scanf("%f",&b1.price);
	return b1;
}

int main()
{
    struct book b2;
	b2=getbook();
	printf("\n book title : %s",b2.title);
	printf("\n book price : %f",b2.price);


    return 0;
}