 #include<stdio.h>
 int main()
 {
 	int a[100],n,i,j,temp;
 	printf("Enter array size:");
 	scanf("%d",&n);
 	printf("Enter array value:");
 	for(i=n-1;i>=;i++)
 	{
 		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n sorted array in ");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
 }
