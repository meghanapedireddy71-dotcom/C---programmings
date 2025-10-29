#include<stdio.h>
int main()
{
	int i,tn,ts;
	printf("Enter table number:");
	scanf("%d",&tn);
	printf("Enter table size:");
	scanf("%d",&ts);
	for(i=1;i<=tn;i++)
	{
		printf("%d*%d=%d",i,tn,i*tn);
	}
	return 0;
}
