#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next[0];
};

struct Node* newNode(int data){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->data=data;
    node->next[0]=NULL;
    node->next[1]=NULL;
    return node;
}

struct Node* construct_bt(int arr[],struct Node* root,int i,int n){
    if(arr[i]!=0 && i<n){
        struct Node* node=newNode(arr[i]);
        root=node;
        root->next[0]=construct_bt(arr,root->next[0],2*i+1,n);
        root->next[1]=construct_bt(arr,root->next[1],2*i+2,n);
    }
    return root;
}

int k=1,l=0,m=0,o=0;

void in(struct Node* root){
    if(root==NULL){
        //o=0;
    return;
    }
    
    in(root->next[0]);
    if(l==root->data){
        l=root->data;
        k++;
    }
    else{
    k=1;
    l=root->data;
    }
    if(m<k){
            m=k;
            o=root->data;
        }
    in(root->next[1]);
}

int main(int argc,char* argv[]){
    int arr[argc],n=0;
    for(int i=1;i<argc;i++){
        arr[n]=atoi(argv[i]);
        n++;
    }
    struct Node* root=construct_bt(arr,root,0,n);
    in(root);
   printf("%d",o);
    return 0;
}
