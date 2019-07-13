#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
int p;
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
scanf("%d",&p);
for(int i=0;i<n;i++)
{
if(p==arr[i])
{
printf("%d",i);
break;
}
}
}
