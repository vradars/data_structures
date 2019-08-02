#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter the string:\n");
	scanf("%s",str);
	int length=strlen(str);
	int middle=length/2;
	int k=length-1;
	int flag=0;
	for(int i=0;i<middle;i++)
	{
		if(str[i]==str[k])
		{
			k--;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("String is pallindrome");
	}
	else
	{
		printf("String is not a pallindrome");
	}
	return 0;
}
