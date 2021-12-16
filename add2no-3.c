//function with parameters and  returning a value
//creating a function addition with 2  int parameters 
#include<stdio.h>
int add(int,int);
main()
{
 system("cls");
 int a,b,r;
 printf("Enter two numbers to performs addition :");
 scanf("%d%d",&a,&b);
 r=add(a,b);
 printf("The addition of two entered number %d and %d is %d",a,b,r);
 return 0;
}
int add(int a,int b)
{
    int r;
    r=a+b;
    return (r);
}