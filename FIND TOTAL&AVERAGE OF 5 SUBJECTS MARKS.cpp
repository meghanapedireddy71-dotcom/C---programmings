#include<stdio.h>
int main()
{
	int S1,S2,S3,S4,S5,T;
	float A;
	printf("Enter S1,S2,S3,S4,S5");
	scanf("%d%d%d%d%d",&S1,&S2,&S3,&S4,&S4,&S5);
	T=S1+S2+S3+S4+S5;
	printf("Total=%d",T);
	A=S1+S2+S3+S4+S5/5;
	printf("Average=%f",A);
	return 0; 
}
