#include<stdio.h>
#include<string.h>
int main()
{
	char S1[20],S2[20];
	int i;
	printf("Enter string 1 name:");
	scanf("%s",&S1);
	for(i=0;S1[i]!=S2[i];i++)
	{
		S2[i]=S1[i];
	}
	S2[i]='\0';
	printf("Orginal string = %s",S1);
	printf("\nCopied string = %s",S2);
	return 0;
}
