#include <stdio.h>
#define Concat(a,b) a##b
 int main(void)
{
	printf("%d",Concat(12,08));
			return 0;
}

