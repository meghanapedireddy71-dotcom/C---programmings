#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("Enter a and b values:");
	scanf("%d%d",&a,&b);
	printf("Enter your choice i.e,add+ sub- multi* div/:");
	scanf("%c",&ch);
	switch(ch)
	{
		case'+':c=a+b;
		        printf("add=%d",c);
		        break;
		case'-':c=a-b;
		        printf("sub=%d",c);
		        break;
		case'*':c=a*b;
		        printf("multi=%d",c);
		        break;
		case'/':c=a/b;
		        printf("div=%d",c);
		        break;
		deafult:("Invalid statement");        
	}
	return 0;
}
