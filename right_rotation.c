#include <stdio.h>

int main(void)
{
	int n,i,r;
		scanf("%d",&n);
		int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&r);
	for(int j=0;j<r;j++)
	{
		int temp=arr[n-1];
		for(i=n-1;i>0;i--)
		{
			arr[i]=arr[i-1];
		}
		arr[0]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}




	return 0;
}
