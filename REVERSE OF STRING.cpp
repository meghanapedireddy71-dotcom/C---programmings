#include<stdio.h>
#include<string.h>
int main()
{
	char S[20];
	printf("Enter string name:");
	scanf("%s",&S);
	strrev(S);
	printf("Reverse string = %s",S);
	return 0;
}
