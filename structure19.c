/*create a structure orders having members orderno, custname, productname, price ,qty
create a funtion getorder which return structure */
#include <stdio.h>
#include<string.h>
struct order
    {
        int on;
        char cn[30];
        char p[30];
        int pr;
        int q;
    };
    struct order getorder()
    {
        struct order o1;
        printf("Enter 1.Order Number :\n 2.Costumer Name :\n 3.Product Name :\n 4.Product Price :\n 5.Product Quantity :\n");
        scanf("%d%s%s%d%d",&o1.on,&o1.cn,&o1.p,&o1.pr,&o1.q);
        return o1;
    }
int main()
{
    struct order o2;
    o2=getorder();
    printf("\n");
    printf("\n------------Order Details--------------");
    printf("\n");

    printf("\n 1.Order Number :%d\n2.Costumer Name :%s\n 3.Product Name :%s\n 4.Product Price :%d\n 5.Product Quantity :%d ",o2.on,o2.cn,o2.p,o2.pr,o2.q);
    return 0;
}
