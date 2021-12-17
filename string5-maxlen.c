#include <stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int l;
    puts("Enter name");
    gets(name);

    printf("The length of string 1 when maxlen is 30 :%d\n",strnlen(name,30));
    printf("The length of string 1 when maxlen is 5 :%d",strnlen(name,5));
    return 0;
}