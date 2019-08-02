#include<stdio.h>
int main()
{
	int n,c,first,last,middle,arr[100];
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter %d integers",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the value to find");
	scanf("%d",&c);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(arr[middle]<c)
			first=middle+1;
		else if(arr[middle]==c)
		{
			printf("index is %d",middle);
			break;
		}
		else
			last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
		printf("value not found");
	return 0;
}

