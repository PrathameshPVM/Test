//switch examples
//display color
#include<stdio.h>
#include<conio.h>
main()
{
char code;
system("cls");
printf("\nEnter any color code\n");
scanf("%c",&code);
switch(code)
{
case 'b':
printf("\nYou have selected blue");
break;
case 'g':
printf("\nyou have selected green");
break;
default:
printf("\nUndefined color");
}
getch();
}
