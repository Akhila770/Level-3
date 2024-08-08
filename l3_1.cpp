// level 3 question 1

/*get a number from user and add 2 to that number and print the result.
Write your code inside the function. Do not Change the Code. */

#include<stdio.h>
int function(int num);
int main()
{ 
     int sum,n;
	sum=function(n);
	printf("sum=%d",sum);
}
int function(int num1)
{
	 int n,sum;
	 printf("enter a number:");
	 scanf("%d",&n);
	 sum=n+2;
     return sum;	 
}



// Output:
/* enter a number:18
  sum=20    */
