//Read & Write Strings in C using gets() and puts() functions
//accept name from user
#include<stdio.h>
#include<string.h>
int main()
{
    char name[10] ;
    puts("Enter your name");
    gets(name);
    puts("Your name is" );
    puts(name);
    return 0;
}