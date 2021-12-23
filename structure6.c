#include<stdio.h>
#include<string.h>

struct employee {
	int empno;
	char empname[10];
};

void printemployee(struct employee emp);
int main() {
	struct employee emp;
	emp.empno=123;
	strcpy(emp.empname,"amit");
	
	printemployee(emp);
}

void printemployee(struct employee emp) {
	printf("\n employee details are :");
	printf("\n empno : %d",emp.empno);
	printf("\n empname : %s",emp.empname);
	
}
