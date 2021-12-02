//WAP to check if it is vowel
#include <stdio.h>
void main()
{
    system ("cls");
    char n1;
    printf("Enter any character to check if it is vowel :");
    scanf("%c",&n1);

    switch (n1)
    {
    case 'a':
        printf("Entered character is vowel");
        break;
    case 'e':
        printf("Entered character is vowel");
        break;
    case 'i':
        printf("Entered character is vowel");
        break;    
    case 'o':
        printf("Entered character is vowel");
        break;
    case 'u':
        printf("Entered character is vowel");
        break;
    default:
        printf("Entered character is not vowel");
        break;
    }
    
}