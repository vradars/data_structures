#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r,arr[10],n,temp=0;
	scanf("%d",&r);
	for(int i=0;i<r;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
		temp=arr[r-1];
		for(int i=r-2;i>=0;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[0]=temp;
	}
	for(int i=0;i<r;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}

