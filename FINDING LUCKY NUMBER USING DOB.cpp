#include<stdio.h>
int main()
{
	int D,M,Y,sum,lucky;
	printf("Enter your date of birth (dd\mm\yyyy):");
	scanf("%d%d%d",&D,&M,&Y);
	sum=D+M+Y;
	lucky=sum%9;
	printf("Your lucky number id %d",lucky);
	return 0;
}
