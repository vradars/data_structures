#include <stdio.h>

int main(int argc,char *argv[])
{
	int i,k;
	char arr[argc];
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

