//level 3 question 9
//Get a two-digit number from user swap the digits. 

#include<stdio.h>
int swap(int num);
int main()
{
	int n,result;
	printf("enter 2 digit value:");
	scanf("%d",&n);
	result=swap(n);
	printf("after swap:%d",result);
}
int swap(int num)
{
	int rem,q,swap_num;
	rem=num%10;
	q=num/10;
	swap_num=rem*10+q;
	return swap_num;
}
