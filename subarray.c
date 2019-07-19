#include<stdio.h>
int main()
{
	int n,arr[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<j+1;k++)
			{
				printf("%d",arr[k]);
				continue;
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
