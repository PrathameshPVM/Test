//1- create a structure product having members prodid,prodname, price
#include<stdio.h>
#include<string.h>
struct p
{
    int pid;
    char n[10];
    float price;
};
int main()
{
    system("cls");
    struct p p1;
    
    printf("Enter Product ID :");
    scanf("%d",&p1.pid);
    printf("Enter Product Name :");
    scanf("%s",&p1.n);
    printf("Enter Price of Product :");
    scanf("%f",&p1.price);

    printf("\n----------Book Details----------");
    printf("\nProduct ID :%d",p1.pid);
    printf("\nProduct name :%s",p1.n);
    printf("\nPrice of Product :%f",p1.price);
    return 0;
}