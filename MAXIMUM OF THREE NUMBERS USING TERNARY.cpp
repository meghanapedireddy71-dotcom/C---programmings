#include<stdio.h>
int main()
{
	float P,t,R,Si;
	printf("Enter P&t&R values:");
	scanf("%f%f%f"&P,&t,&R);
	Si=(P*t*R)/100;
	printf("Simple interst=%f",Si);
	return 0; 
}
