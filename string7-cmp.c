#include <stdio.h>
#include <string.h>
int main()
{
    system("cls");
     char s1[20];
     char s2[20];
     printf("Enter first string :");
     scanf("%s",s1);
     printf("Enter second string :");
     scanf("%s",s2);

     if (strcmp(s1, s2) ==0)
     {
        printf("string 1 and string 2 are equal");
     }else
      {
         printf("string 1 and 2 are different");
      }
     return 0;
}
