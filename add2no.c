//create a function named addition to accept 2 no and display the addition of 2 no.
//function without parameters and not returning any value
#include<stdio.h>
void add(void);
main()
{
    system("cls");
    add();
    return 0;
}
void add(void)
{
    int a,b,r;
    printf("Enter two number for addition :");
    scanf("%d%d",&a,&b);
    r=a+b;
    printf("The addition of two number %d + %d = %d",a,b,r);

}