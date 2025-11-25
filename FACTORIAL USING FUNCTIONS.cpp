#include<stdio.h>
void num(int);
void factorial (int);
int main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	factorial(n);
	num(n);
	return 0;
}
void num(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
	}
}
void factorial(int n)
{
	int i,fact = 1;
	for(i=1;i<=n;i++)
	{
		fact = fact * i;
	}
	printf("\n facotrial of %d = %d",n,fact);
}
