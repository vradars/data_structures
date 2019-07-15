#include<stdio.h>
int g_c_d(int n,int d)
{
	int max=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0&&d%i==0)
		{
			if(max<i)
			{
				max=i;
			}
		}
	}
	return max;
}
int main()
{
	int no,d;
	printf("Enter the no of elements you want in an array\n");
	scanf("%d",&no);
	int arr[20];
	printf("Enter the elements\n");
	for(int i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the no of elements by which you want to push array\n");
	scanf("%d",&d);
	int gcd=g_c_d(no,d);
	int k=0,j=0,temp=0;
	for(int i=0;i<gcd;i++)
	{
		temp=arr[i];
		j=i;
		while(1)
		{
			k=j+d;
			if(k>=no)
				k=k-no;
			if(k==i)
				break;
			arr[j]=arr[k];
			j=k;
		}
		arr[j]=temp;
	}
	for(int i=0;i<no;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}



