// level 3 question3

/*Get a number from user and Check whether the sum of digits is 14 and
print the result. Write your code inside the function. Do not Change the
format. */

#include<stdio.h>
int function(int num);
int main()
{ 
     int res,n;
	res=function(n);
	printf("sum=%d",res);
	return 0;
}
int function(int num1)
{
	 int n,res=0,rem;
	 printf("enter a number:");
	 scanf("%d",&n);
	 while(n>0)
	 { 
	     rem=n%10;
		 res=res+rem;
		 n=n/10;	
	 }
	 if(res==14)
	 {
             return res;
         }
     else
        {
	 return 0;
        }
}


//output:
/*   enter a number:59
	res=14    */
