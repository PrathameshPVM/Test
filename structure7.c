#include<stdio.h>

struct employee {
	int empno;
	char empname[10];
};

void printemployee(struct employee emp);
int main() {
	struct employee emp,emp1;
	emp.empno=123;
	strcpy(emp.empname,"amit");
	
	printemployee(emp);
	
	emp1.empno=223;
	strcpy(emp1.empname,"rajesh");
	printemployee(emp1);
}

void printemployee(struct employee emp) {
	printf("\n employee details are :");
	printf("\n empno : %d",emp.empno);
	printf("\n empname : %s",emp.empname);
	
}
