#include<stdio.h>
#include<stdlib.h> 

void merge(int arr[],int n0,int arr1[],int n1){
    int n=0;
    for(int p=0;p<n0;p++){
        if(arr[p]!=0){
         //arr[n]=arr[p];
         n++;
        }
    }
    /*if(n==0){
        int i=0,j=0;
        while(i<n1){
        arr[i]=arr1[j];
        i++;
        j++;
        }
    }*/
    //else{
    int i=n-1,j=n1-1,k=n0-1;
    while(j>=0){
        if(arr[i]>arr1[j]){
            arr[k]=arr[i];
            i--;
            k--;
        }
        if(arr[i]<arr1[j]){
            arr[k]=arr1[j];
            j--;
            k--;
        }
    }
    //}
}    
    
int main(int argc,char* argv[]){
    int n=atoi(argv[1]);
    int arr[n],k=0,arr1[argc-n],k1=0;
    for(int i=2;i<n+2;i++){
        arr[k]=atoi(argv[i]);
        k++;
    }
    for(int i=n+2;i<argc;i++){
        arr1[k1]=atoi(argv[i]);
        k1++;
    }
    merge(arr,n,arr1,k1);
    for(int i=0;i<n-1;i++)
    printf("%d ",arr[i]);
    printf("%d",arr[n-1]);
    return 0;
}
