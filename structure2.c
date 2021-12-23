//create a structure array  of 5 elements of product structure
#include <stdio.h>
#include<string.h>
struct pro
{
    int proid;
    char name[10];
};

int main()
{
    struct pro pro1[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter product ID :");
        scanf("%d",&pro1[i].proid);
        printf("\n Enter Book Title :");
        scanf("%s",&pro1[i].name);
    }
    printf("\n -------------- Book details of 3 book ----------------");
    printf("\n");

    for ( i = 0; i < 5; i++)
    {
        printf("\n----------------book %d  details ----------------------",i+1);
	// displaying the values of structure members
	printf("\n Product ID : %d", pro1[i].proid);
	printf("\n Name  : %s",pro1[i].name);
	printf("\n -------------------------------");

    }
    
    return 0;
}