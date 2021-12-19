#include <stdio.h>
int main()
{
    char ch;
	system("cls");
	printf("\nEnter any character");
	ch=getche();
	if (ch>='0' &&  ch<='9')
		printf("\nYou have entered a number");
	else if (ch>='a' && ch<='z')
		printf("\nYou have entered a lower case alphabet");
	else if (ch>='A' && ch<='Z')
		printf("\nYou have entered a upper case alphabet");
	else
		switch(ch)
		{      	
            case ' ':
			case '\n':
			case '\t':
			case '\r':
			case '\f':
				printf("\nYou have entered a white space character");
				break;
			default:
				printf("\nYou have entered a special character");
		}

    return 0;
}