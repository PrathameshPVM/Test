#include<stdio.h>
//structure inside structure
int main()
{
	struct name
	{
		char fname[15];
		char mname[15];
		char lname[15];
	};
	struct employee
	{	int code;
		struct name ename;
		float sal;
	}e,e2;

	printf("\nEnter employee code");
	scanf("%d",&e.code);
	printf("\nEnter first,middle,last name:    ");
	scanf("%s%s%s",e.ename.fname,e.ename.mname,e.ename.lname);
	printf("\nEnter salary=   ");
	scanf("%f",&e.sal);
	e2.code=e.code;
	e2.ename=e.ename;
	e2.sal=e.sal;
	printf("\ncode =%d",e2.code);
	printf("\n%s %s %s",e2.ename.fname,e2.ename.mname,e2.ename.lname);
	printf("\n  salary =%f",e2.sal);

}
