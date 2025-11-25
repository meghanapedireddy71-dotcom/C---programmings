#include<stdio.h>
#include<string.h>
int main()
{
	char S1[20],S2[20];
	int i,l1,l2,flag=0;
	printf("Enter strings names:");
	scanf("%s%s",&S1,&S2);
    for(i=0;S1[i]='\0';i++);
    l1=i;
    for(i=0;S2[i]='\0';i++);
    l2=i;
    if(l1==l2)
    {
    	for(i=0;S1[i]='\0';i++)
    	{
    		if(S1[i]!=S2[i])
    		{
    			flag=1;
    			break;
			}
		}
	}
	if(flag==0)
	printf("Both strings not are equal");
	else
	printf("Both strings are  equal");
	return 0;
}
