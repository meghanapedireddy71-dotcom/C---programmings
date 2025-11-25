#include<stdio.h>
void fibO(int);
int main()
{
	int n;
	printf("Enter size:");
	scanf("%d",&n);
	fibO(n);
	return 0;
}
void fibO(int n)
{
	int f=0,s=1,t;
	printf("%d %d",f,s);
	t=f+s;
	while(t<=n)
	{
		printf(" %d",t);
		f=s;
		s=t;
		t=f+s;
	}
}
