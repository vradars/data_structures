#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int n,arr[10],l=0;
	n=argc-1;
	for(int i=1;i<argc;i++)
	{
		arr[l]=atoi(argv[i]);
		l++;
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
