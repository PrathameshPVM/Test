/*Write a C program that accepts an employee's ID, total worked hours of a month and 
the amount he received per hour. Print the employee's ID and salary (with two decimal places) 
of a particular month.*/

#include<stdio.h>
void main()
{
    system ("cls");
    int id,workhr,payprhr;
    float salary;
    printf("Please enter employer ID :");
    scanf("%d",&id);
    printf("Enter total Work hour in Month :");
    scanf("%d",&workhr);
    printf("Enter the amount recived per hour :");
    scanf("%d",&payprhr);

    salary=workhr*payprhr;

    printf("The Employers ID :%d and Salary :%f",id,salary);
   

}