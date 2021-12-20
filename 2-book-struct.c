#include<stdio.h>
#include<string.h>
struct book
{
    int bookid;
    char title[10];
    float price;
};
int main()
{
    system("cls");
    struct book book1,book2;

    book1.bookid=123;
    strcpy(book1.title,"java");
    book1.price=123.22f;

    printf("\n book id :%d",book1.bookid);
    printf("\n title :%s",book1.title);
    printf("\n price :%f",book1.price);

    book2.bookid=124;
    strcpy(book2.title,"html");
    book2.price=133.22f;

    printf("\n book id :%d",book2.bookid);
    printf("\n title :%s",book2.title);
    printf("\n price :%f",book2.price);
    return 0;
}
