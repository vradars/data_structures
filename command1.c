#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	printf("the name of the program is %s",argv[0]);
	for(int i=1;i<argc;i++)
	{
		printf("%s\n",argv[i]);
	}
	return 0;
}

