#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
      int arr[10], k=0;
	int count=argc;
	for(int i=1;i<argc;i++)
	{
		 arr[k]=(int)atoi(argv[i]);
		k++;
	}
	for(int i=count-2;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

