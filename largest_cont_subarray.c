#include <stdio.h>

int main(int argc,char *argv[])
{
	int i=0,k=0,arr[argc-1],sum=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	sum=largest_sum(arr,k);
	printf("largest sum = %d",sum);

	return 0;
}
int largest_sum(int arr[],int n)
{
	int x=0,s=0,str=0,end=0,j=0;
	for(j=0;j<n;j++)
	{
		x=x+arr[j];
		if(x<0)
		{
			x=0;
			str=j+1;
		}
		else if(x>s)
		{
			s=x;
			end=j;
		}
	}
	printf("starting index = %d and ending index = %d ",str,end);
	return s;
}
