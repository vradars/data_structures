#include <stdio.h>

int main(int argc,char *argv[]){

	int i=0,arr[argc],k=0,temp=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	for(i=0;i<k/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[k-1-i];
		arr[k-1-i]=temp;
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
