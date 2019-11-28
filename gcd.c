#include <stdio.h>
int main(int argc,char *argv[])
{
	int i=0,k=0,arr[argc];
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int res=arr[0];
	for(i=1;i<k;i++)
	{
		res=GCD(arr[i],res);
	}
	printf("GCD = %d",res);
	return 0;
}
int GCD(int a,int b)
{
	int gcd=0;
	for(int i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	return gcd;
}

