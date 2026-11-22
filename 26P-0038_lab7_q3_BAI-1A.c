#include<stdio.h>
int readUnits(void);
float calculateBill(int units);
int main()
{
	int units;
	float bill;
	units=readUnits();
	bill=calculateBill(units);
	printf("Units consumed: %d\n", units);
	printf("Total bill: Rs %.2f\n", bill);
	return 0;
	
	
}
int readUnits(void)//3.no arguments, returns a value
{
	int units;
	printf("Enter units consumed: ");
	scanf("%d",&units);
	while(units<0)
	{
	   printf("Units cannot be negative.\n");
	   
	   printf("Enter units consumed: ");
	   scanf("%d",&units);
		
	}
	return units;
}
float calculateBill(int units)//4.Argument  and return a value
	{
		float bill;
		if(units <=100)
		{
			bill=units*10;
		}
		else if(units <=300)
		{
			bill=(100*10)+(units-100)*15;
		}
		else
		{
			bill=(100*10)+(200*15)+(units-300)*20;
		}
		 
		 if(bill>3000)
		 {
		 	bill=bill +(bill*0.05);
		 	
		 }
		 return bill;
	}