#include<stdio.h>
void showMenu(void);
int readNonNegative(void);
void printLine(int length);
long power(int base, int exp);
long factorial(int n);
int gcd(int a, int b);
int lcm(int a, int b);


int main()
{
	int choice,a,b;
	long result;
	
	do
	{
		

	showMenu();
	
	
	printf("Choice: ");
	scanf("%d",&choice);
	if(choice==1)
	{
		a=readNonNegative();
		b=readNonNegative();
		result=power(a, b);
		printLine(20);
		printf("%d ^ %d = %ld\n", a, b, result);
		printLine(20);
		
	}
	else if(choice== 2)
	{
		a=readNonNegative();
		result=factorial(a);
		printLine(20);
		printf("%d! =%ld\n", a, result);
		printLine(20);
	}
	else if(choice ==3)
	{
		a=readNonNegative();
		b=readNonNegative();
		printLine(20);
		printf("GCD = %d\n", gcd(a, b));
		printf("LCM = %d\n", lcm(a, b));
		printLine(20);
		
	}
	else if(choice == 4)
	{
		printf("Goodbye!\n");
		
	}
	else
	{
		printf("Invalid choice.\n");
		
		
	}
	
}

	while(choice !=4);
	
	return 0;
}
void showMenu(void)
{
	printf("\n------MINI MATH TOOLKIT-----\n");
	printf("1. Power \n");
	printf("2. Factorial\n");
	printf("3. GCD and LCM\n");
	printf("4. Exit\n");
}
int readNonNegative(void)
{
	int num;
	printf("Enter a non negative number: ");
	scanf("%d", &num);
	while(num<0)
	{
		printf("Number cannat be negative.\n");
		printf("Enter a non negative number: ");
		scanf("%d", &num);
		
	}
	return num;
}
void printLine(int length)
{
	int i;
	for(i=1; i<=length; i++)
	{
		printf("-");
		
	}
	printf("\n");
	
}
long power(int base, int exp)
{
	int i;
	long result=1;
	for(i=1; i<=exp; i++)
	{
		result=result*base;
	}
	return result;
	
	
}
long factorial(int n)
{
	int i;
	long fact=1;
	for(i=1; i<=n; i++)
	{
		fact=fact*i;
		
	}
	return fact;
	
}
int gcd(int a, int b)
{
	int i;
	int greatest=1;
	for(i=1;i<=a && i<=b; i++)
	{
		if(a %i==0 && b % i==0)
		{
			greatest=i;
			
		}
	}
	return greatest;
	
}
int lcm(int a, int b)
{
	int g;
	g=gcd(a,b);
	if(g == 0)
	return 0;
	
	return (a*b)/g;
}