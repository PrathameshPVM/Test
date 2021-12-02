/*Write a C program to read an amount (integer value) and break 
the amount into smallest possible number of bank notes*/
#include <stdio.h>
int main() 
{
    system("cls");
	int amt, total;
	printf("Input the amount: ");
	scanf("%d",&amt);
	total = amt/100;
	printf("There are:\n");
	printf("%d Note(s) of 100\n", total);
	amt = amt-(total*100);
	total = amt/50;
	printf("%d Note(s) of 50\n", total);
	amt = amt-(total*50);
	total = amt/20;
	printf("%d Note(s) of 20\n", total);
	amt = amt-(total*20);
	total = (amt/10);
	printf("%d Note(s) of 10\n", total);
	amt = amt-(total*10);
	total = amt/5;
	printf("%d Note(s) of 5\n", total);
	amt = amt-(total*5);
	return 0;
}