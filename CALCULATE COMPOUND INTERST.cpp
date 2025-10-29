#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,ci;
	printf("Enter p,r,t values");
	scanf("%f%f%f",&p,&t,&r);
	ci=p*(pow(1+r/100,t)-1);
	printf("compound interst=%f",ci);
	return 0;
}
