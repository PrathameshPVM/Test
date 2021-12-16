//function to multiply 2 no and return the result
#include<stdio.h>
int m(int,int);
int main()
{
    system ("cls");
    int a,b,r;
    printf("Enter two number for multiplication :");
    scanf("%d%d",&a,&b);
    r=m(a,b);
    printf("Multiplication of entered two numbers is %d * %d = %d",a,b,r);
    return 0;

}
int m(int a,int b)
{
    int r;
    r=a*b;
    return (r);
}