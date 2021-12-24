/* structure to store student rollno,name,marks of 3 sub and cal. percentage */
int main()
{
    system("cls");
	struct student
	{
        
		int rollno;
		char name[20];
		int  m1;
		int  m2;
		int  m3;
		float per;
	}s1;

	printf("\nEnter student rollno,name,marks of 3 sub :");
	scanf("%d%s%d%d%d",&s1.rollno,s1.name,&s1.m1,&s1.m2,&s1.m3);
	s1.per=(s1.m1+s1.m2+s1.m3)*100/300.0;
	printf("\nRoll No=%d \nName=%s \nPercent=%f",s1.rollno,s1.name,s1.per);

}
