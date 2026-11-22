#include<stdio.h>
int isPrime(int n);
int isPerfect(int n);
int reverseNumber(int n);
int isPalindrome(int n);
int digitSum(int n);
void report(int n);


int main()
{
	int n;
	
	
	printf("Enter a positive Number: ");
	scanf("%d",&n);
	report(n);

	return 0;
}
int isPrime(int n)//4.Arguments and returns a value
{
	int i;
	if(n<=1)
	return 0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;

}
int isPerfect(int n)//4.Arguments and returns a value
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		
	}
	if(sum==n)
	return 1;
	else
	return 0;
	
}
int reverseNumber(int n)//4.Arguments and returns a value
{
	int rev=0,digit;
	while(n>0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
		
	}
	return rev;
	
}
int isPalindrome(int n)
{
	if(n==reverseNumber(n))
	return 1;
	else
	return 0;
}
int digitSum(int n)
{
	int sum=0;
	while(n>0)
	{
		sum=sum+(n%10);
		n=n/10;
		
	}
	return sum;
}
void report(int n)
{
	int i;
	if(isPrime(n))
	printf("Prime: Yes\n");
	else
	printf("Prime: No\n");
	if(isPerfect(n))
	printf("Perfect: Yes\n");
	else
	printf("Perfect: No\n");
	
	printf("Reverse: %d\n",reverseNumber(n));
	if(isPalindrome(n))
	printf("Palindrome: Yes\n");
	else
	printf("Palindrome: No\n");
	printf("Sum of digits: %d\n", digitSum(n));
	printf("Primes from 1 to %d:",n);
	for(i=1; i<=n; i++)
	{
		if(isPrime(i)==0)
		continue;
		printf("%d ", i);
		
	}
	printf("\n");
}
