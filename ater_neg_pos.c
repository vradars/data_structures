#include <stdio.h>

int main(void)
{
	int n,i=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int p=0,q=0,r=0,s=0;
	int arr1[100],arr2[100],arr3[100],arr4[100];
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			arr1[p]=arr[i];
				p++;
		}
		if(arr[i]<0)
		{
			arr2[q]=arr[i];
			q++;
		}
		if(arr[i]>0)
		{
			arr3[r]=arr[i];
			r++;
		}
	}
	int m=0,z=0;
	while(m!=q && z!=r)
	{
		arr4[s]=arr2[m];
		s++;
		m++;
		arr4[s]=arr3[z];
		s++;
		z++;
	}
	while(m!=q)
	{
		arr4[s]=arr2[m];
		s++;
		m++;
	}
	while(z!=r)
	{
		arr4[s]=arr3[z];
		s++;
		z++;
	}
	for(i=0;i<p;i++)
	{
		printf("%d ",arr1[i]);
	}
	for(i=0;i<s;i++)
	{
		printf("%d ",arr4[i]);
	}
	return 0;
}
