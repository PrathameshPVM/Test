/*It returns the length of the string without including end character 
(terminating char ‘\0’).

Example of strlen vs sizeof:*/
#include <stdio.h>
#include <string.h>
int main()
{
    system("CLs");
    char name[20];
    int l;
    puts("Enter Your Name");
    gets(name);
    l=strlen(name);
    printf("The Length of entered name is %d\n",l);
    printf("The size of an array is %d",sizeof(name));


    return 0;
}
