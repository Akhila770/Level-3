// level 3 question 7
/*Get two numbers from user and compare the numbers. If same print
“Same” otherwise print “Not Same”. Write your code inside the function.
Do not Change the format.   */

#include<stdio.h>
int compare_num(int num1,int num2);
int main()
{
	int n,m,result,same;
	printf("enter number:");
	scanf("%d",&n);
	printf("enter number:");
	scanf("%d",&m);
	result=compare_num(n,m);
	
}
int compare_num(int num1, int num2)
{
	int rem1,rem2;
    if(num1==num2)
    {
    	printf("same");
	}
	else
	{
		printf("not same");
	}
}
