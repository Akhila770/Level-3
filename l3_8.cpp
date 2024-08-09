// level 3 question 8
/*  Get a number from user and check whether the digits are in
ascending order.   */

#include<stdio.h>

int ascending(int num);

int main()
{
	int n,result;
	printf("Enter number: ");
	scanf("%d",&n);
	
	result=ascending(n);  // Assign the return value to result
	
	if(result==1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	
	return 0;
}

int ascending(int num)
{
	int pd, cd;
	pd = num % 10;  
	num = num / 10;

	while(num > 0)
	{
		cd = num % 10;  
		if(cd > pd)  
		{
			return 0; 
		}
		pd = cd;  /
		num = num / 10;  
	}
	return 1;  
}
