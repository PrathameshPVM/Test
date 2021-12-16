//function without parameters and  returning a value
//creating a function addition with 2  int parameters 
#include<stdio.h>
int add(void);
main()
{
    int r,a,b;
 system("cls");
 r=add();
 printf("The addition of two entered number is %d",r);
 return 0;
}
int add(void)
{
   int a,b,r;
 printf("Enter two numbers to performs addition :");
 scanf("%d%d",&a,&b);
 r=a+b;
    return (r);
}