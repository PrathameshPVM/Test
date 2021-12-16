//function with parameters and not returning any value
//creating a function addition with 2  int parameters 
#include<stdio.h>
void add(int,int);
main()
{
 system("cls");
 int a,b;
 printf("Enter two numbers to performs addition :");
 scanf("%d%d",&a,&b);
 add(a,b);
 return 0;
}
void add(int a,int b)
{
    int r;
    r=a+b;
    printf("The addition of two entered number %d and %d is %d",a,b,r);

}