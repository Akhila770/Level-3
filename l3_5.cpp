//level 3 question 5
/*Get a number from user and count the number of zeros in that number
and print. Write your code inside the function. Do not Change the
format. */

#include<stdio.h>
int zero(int count);
int main()
{
	int n,res;
	res=zero(n);
}
int zero(int count)
{
	int n,c=0,rem;
	printf("enter number:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		if(rem==0)
		{
			c++;
		}
		n=n/10;
	}
	printf("count=%d",c);
}
