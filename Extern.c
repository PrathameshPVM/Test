#include <stdio.h>
int num1;
void display();
int main()
{
    extern int num1;
    printf("\n value of extern num1 is %d",num1);
    num1=2;
    printf("\n value of extern num1 after initilizing value =%d",num1);
    //calling function display
    display();
}
void display()
{
    printf("\n value of extern num1 inside display function =%d",num1);
}