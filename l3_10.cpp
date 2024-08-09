// level 3 question 10
// Get a number from user, find the number of digits and print the same.

#include<stdio.h>
int count(int num);
int main()
{
	int n,result;
	printf("enter number:");
	scanf("%d",&n);
	result=count(n);
	printf("count=%d",result);
}
int count(int num)
{
	int c=0,rem;
	while(num>0)
	{
		rem=num%10;
		if(rem!=0)
		{
		c=c+1;
	    }
		num=num/10;
	}
	return c;
}
