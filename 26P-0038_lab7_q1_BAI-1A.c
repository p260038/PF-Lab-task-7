#include<stdio.h>
void welcome(void);
void printSquare(int side, char ch);
int main()
{
	int side;
	char ch;
	welcome();
	printf("Enter side: ");
	scanf("%d",&side);
	printf("Enter character: ");
	scanf(" %c",&ch);
	printSquare(side,ch);
	welcome();
	return 0;
	
}
void welcome(void)//1.No argument, no return value
{
	printf("============================\n");
	printf("Pattern Printer v1.0\n");
	printf("============================\n");
}
void printSquare(int side,char ch)//2.Arguments, no return value
{
	int i,j;
	for(i=1;i<=side;i++)
	{
		for(j=1;j<=side;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
}