#include<stdio.h>
float toFahrenheit(float c);
float toCelsius(float f);
void printTable(int start, int end, int step);
int main()
{
	int start,end, step;
	float f;
	
	
	printf("Start: ");
	scanf("%d",&start);
	printf("End: ");
	scanf("%d",&end);
	printf("Step: ");
	scanf("%d",&step);
	printTable(start, end, step);
	printf("Enter a temperature in Fahrenheit: ");
	scanf("%f", &f);
	printf("%.1f F= %.2f C\n", f, toCelsius(f));
	

	return 0;
}
float toFahrenheit(float c)//4. Argument and return a value
{
	return (c*9/5)+32;
}
float toCelsius(float f)//4.Argument and  returns a value 
{
	return (f-32)*5/9;
	
}
void printTable(int start, int end, int step)
{
	int i;
	printf("\nCelsius   Fahrenheit\n");
	
	for(i=start; i<=end; i=i+step)
	{
		printf("%d      %.1f\n", i, toFahrenheit(i));
	}
}
