#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],strr[20],temp[20],ch;
	int offset=0;
	printf("Enter first String:\n");
	ch=fgetc(stdin);
	while(ch!='\n')
	{
		str[offset]=ch;
		offset++;
		ch=fgetc(stdin);
	}
	offset=0;
	printf("Enter second String:\n");
	ch=fgetc(stdin);
	while(ch!='\n')
	{
		strr[offset]=ch;
		offset++;
		ch=fgetc(stdin);
	}
	strcpy(temp,str);
	strcpy(str,strr);
	strcpy(strr,temp);
	printf("Your first string is:%s\n",str);
	printf("Second String is:%s\n",strr);
	return 0;
}
	
