//create a structure array of 3 elements of book structure
#include <stdio.h>
#include<string.h>
struct book
{
    int bookid;
    char title[10];
};

int main()
{
    struct book book1[3];
    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("Enter book ID :");
        scanf("%d",&book1[i].bookid);
        printf("\n Enter Book Title :");
        scanf("%s",&book1[i].title);
    }
    printf("\n -------------- Book details of 3 book ----------------");
    printf("\n");

    for ( i = 0; i < 3; i++)
    {
        printf("\n----------------book %d  details ----------------------",i+1);
	// displaying the values of structure members
	printf("\n book id : %d", book1[i].bookid);
	printf("\n title  : %s",book1[i].title);
	printf("\n -------------------------------");

    }
    
    return 0;
}