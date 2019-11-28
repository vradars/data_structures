#include <stdio.h>

int main(int argc,char *argv[]){
	int arr[argc],i=0,k=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	reverse(arr,0,k-1);
	for(i=0;i<k;i++)
	{
		printf("%d",arr[i]);
	}

	return 0;
}


void reverse(int arr[],int str,int end)
{
	int temp=0;
	if(str<=end)
	{
		temp=arr[str];
		arr[str]=arr[end];
		arr[end]=temp;
		reverse(arr,str+1,end-1);
	}
}

