#include<stdio.h>
#include<string.h>
int main()
{
	char S[20];
	printf("Enter string name:");
	scanf("%s",&S);
	printf("upper case string = %s",strupr(S));
	return 0;
}
