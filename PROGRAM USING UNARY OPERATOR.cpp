#include<stdio.h>
int main()
{
	int X,P,Q,R,S;
	printf("Enter any number:");
	scanf("%d",&X);
	P=++X;
	Q=--X;
	R=X++;
	S=X--;
	printf("P=%d Q=%d R=%d S=%d X=%d",P,Q,R,S,X);
	returb 0;
}
