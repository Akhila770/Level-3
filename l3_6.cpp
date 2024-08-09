// level 3 question 6
/* Get a number from user and reverse that number and print. Write your
   code inside the function. Do not Change the format.   */
   
#include<stdio.h>
int reverse(int num);
int main()
{
	int result,n;
	result=reverse(n);
	printf("reverse number:%d",result);
}
 
 //function 
int reverse(int num)
{
	int n,rem,rev=0;
	printf("enter number:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}
