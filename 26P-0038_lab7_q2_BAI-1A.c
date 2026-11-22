#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,area;
	
	printf("Enter side a: ");
	scanf("%lf",&a);
	printf("Enter side b: ");
	scanf("%lf",&b);
	c=sqrt(pow(a,2) + pow(b,2));
	area=0.5*a*b;
	printf("Hypotenuse: %.2lf\n", c);
	printf("Rounded up: %.0lf\n", ceil(c));
	printf("Rounded down: %.0lf\n", floor(c));
	printf("Area: %.2lf\n", area);
	return 0;
}