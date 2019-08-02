#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[100],k=0;
	int count=argc-1;
	for(int i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int arr1[100],arr2[100],i=0,j=0,count1=0,count2=0;
	for(int i1=0,j1=0,k1=0;k1<count;k1++)
	{
		if(arr[k1]<0)
		{
			arr1[i1]=arr[k1];
			i1++;
			count1++;
		}
		else
		{
			arr2[j1]=arr[k1];
			j1++;
			count2++;
		}
	}

	while(1)
	{
		if(i==count1&&j==count2)
			break;
		while(i<count1)
		{
			printf("%d\t",arr1[i]);
			i++;
			break;
		}
		while(j<count2)
		{
			printf("%d\t",arr2[j]);
			j++;
			break;
		}

	}

	return 0;
}


	


				
				


