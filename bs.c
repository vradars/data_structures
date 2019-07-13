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
int f=0;
int l=n-1;
int mid,flag=0;
while(f<=l)
{
mid=(f+l)/2;
if(p==arr[mid])
{
flag=1;
break;
}
else
{
if(p>arr[mid])
f=mid+1;
else
l=mid-1;
}
}
if(flag==1)
printf("%d",mid+1);
else
printf("Element not found");
}
