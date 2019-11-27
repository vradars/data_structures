#include <iostream>

using namespace std;

void post(int pre[],int n,int min,int max,int &index){
	if(index==n)
		return;
	if(pre[index]<min || pre[index]>max)
		return;
	int val=pre[index];
	index++;

	post(pre,n,min,val,index);

	post(pre,n,val,max,index);

	cout<<val<<" ";
}

void pretopost(int arr[],int n){
	int index=0;
	post(arr,n,-1000,1000,index);
}

int main(int argc,char* argv[]){
	int arr[argc],n=0;
	for(int i=1;i<argc;i++){
		arr[n]=atoi(argv[i]);
		n++;
	}
	pretopost(arr,n);
	return 0;
}
