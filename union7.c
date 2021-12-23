int main()
{       union employee
	{	int code;
		char name[20];
	}e; 
    system("cls");
	printf("\nEnter code & name of employee");
	scanf("%d%s",&e.code,&e.name);
	printf("\nCode=%d \nName=%s",e.code,e.name);
//here code will print garbage value since name has replaced code in memory

}
