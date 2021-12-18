//vowel
#include <stdio.h>
int main()
{
    char ch;
	system("cls");
	printf("\nEnter any alphabet :");
	//ch=getche();
    scanf("%c",&ch);

	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("\nYour alphabet is a vowel");
			break;
		default:
			printf("\nYour alphabet is a consonent");
	}

    return 0;
}