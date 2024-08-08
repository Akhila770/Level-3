//level 3 question 4 
/*Get a number from user and Check Prime or Not and print the result.
Write your code inside the function. Do not Change the format. */


#include<stdio.h>
int isprime(int num);
int main()
{ 
     int res,n;
    res=isprime(n);

}
int isprime(int num1)
{
	 int n,i,c=0;
	 printf("enter a number:");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 { 
	    if(n%i==0)
		{
		   c++;	
		} 	
	 }
	 if(c==2)
	 {
    printf("prime  number");
     }
     else
	  {
	   printf("not prime number.");
     }
}
