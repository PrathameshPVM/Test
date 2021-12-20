//2- repeat the above program accepting values from the user
#include<stdio.h>
#include<string.h>
struct p
{
    int pid;
    char n[10];
    float price;
}p;
int main()
{
    p.pid=1267;
    strcpy(p.n,"Mobile");
    p.price=236.25;

    printf("\n Product ID :%d",p.pid);
    printf("\n Product Name :%s",p.n);
    printf("\n Product Price :%f",p.price);

    return 0;
}
