#include<stdio.h>
int main()
{
	int arr[10],n;
	scanf("%d",&n)
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i])
	}
	int c;
	scanf("%d",&c);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==c)
		{
			printf("%d",arr[i])
				break;
		}
	}
	return 0;
}

