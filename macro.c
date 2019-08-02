#include<stdio.h>
int main(void)
{
	int arr[]={1,2,3,4,5};
	int *ptr=arr;
	for(int i=0;i<5;i++)
	{
		printf("%d",*(ptr+i));
	}
	return 0;
	
}


