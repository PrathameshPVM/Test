//3- create a structure student having members rno,name,city,state
#include <stdio.h>
#include<string.h>
struct stu
{
    int rno;
    char n[10];
    char c[10];
    char s[30];
}stu;

int main()
{
    stu.rno=1;
    strcpy(stu.n,"Pratham");
    strcpy(stu.c,"Nagpur");
    strcpy(stu.s,"Maharashtra");

    printf("\n----------Student INFO----------");
    printf("\nStudent Roll number :%d",stu.rno);
    printf("\nStudents Name :%s",stu.n);
    printf("\nStudents City :%s",stu.c);
    printf("\nStudents state :%s",stu.s);
    
    return 0;
}