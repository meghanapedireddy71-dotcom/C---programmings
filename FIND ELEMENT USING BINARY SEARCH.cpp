#include<stdio.h>
int main()
{
	int a[100],n,i,low,high,mid,x;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array value:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter search element:");
	scanf("%d",&x);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<high)
	{
		if(x==a[mid])
		break;
		else if(x>a[mid])
		low=mid+1;
		else
		high=mid-1;
	}
	if(x==a[mid])
	printf("Search element is found");
	else
	printf("Search element is not found");
	return 0;
}
