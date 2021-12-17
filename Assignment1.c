/*create a function factorial with one int parameter to
 accept no. to calculate and display the factorial of a number.*/
 #include<stdio.h>
 int f(int);
 main()
 {
     system("cls");
     int a;
     printf("Enter number to find factorial:");
     scanf("%d",&a);
     f(a);
     printf("The Factorial of %d is %d",a,f(a));
     return 0;
 }
 int f(int a)
 {
     int r=1;
     for (int i = 1; i <= a; i++)
     {
         r=r*i;
     }
     return(r);
 }