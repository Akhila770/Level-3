// level 3 question 2
/*Get a number from user and subtract 5 to that number and print the
result. Write your code inside the function. Do not Change the format. */


#include<stdio.h>
int function(int num);
int main()
{ 
     int sub,n;
	sub=function(n);
	printf("sub=%d",sub);
}
int function(int num1)
{
	 int n,sub;
	 printf("enter a number:");
	 scanf("%d",&n);
	 sub=n-5;
     return sub;	 
}


// output:
/*  enter a number:15
   sub=10     */
