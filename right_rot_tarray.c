#include <stdio.h>

int main(int argc,char *argv[])
{
	int i,k=0,m=0,arr[argc];
	for(i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int r=atoi(argv[argc-1]);
	int temp[r];
	for( i=k-1;i>k-1-r;i--)
	{
		temp[m]=arr[i];
		m++;
	}
	for(i=k-1;i>=r;i--)
	{
		arr[i]=arr[i-2];
	}
	for(i=0;i<r;i++)
	{
		arr[i]=temp[i];
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
