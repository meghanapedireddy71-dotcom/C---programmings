#include<stdio.h>
#include<string.h>
int main()
{
	char S1[20],S2[20];
	int i,l;
	printf("Enter two string names:");
	scanf("%s%s",&S1,&S2);
	for(i=0;S1[i]!='\0';i++);
	l=i;
	for(i=0;S2[i]!='\0';i++);
	{
		S1[l++]=S2[i];
	}
	S2[l]='\0';
	printf("Merge string = %s",S1);
	return 0;
}
