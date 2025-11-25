#include<stdio.h>
void multi(int,int);
int main()
{
	int x=7,y=9;
	multi(x,y);
	return 0;
}
void multi(int x,int y)
{
	int z;
	z=x*y;
	printf("multiplication = %d",z);
}
