#include <iostream>

using namespace std;

class Node{
        public:
                int data;
                Node* next[2];
                Node(int data){
                        this->data=data;
                        next[0]=next[1]=NULL;
                }
};

int *arr1=new int;
int c=0,k=0;

Node* construct_bt(int arr[],Node* root,int i,int n){
        if(arr[i]!=-1 && i<n){
        Node* node=new Node(arr[i]);
        root=node;
        root->next[0]=construct_bt(arr,root->next[0],2*i+1,n);
        root->next[1]=construct_bt(arr,root->next[1],2*i+2,n);
        }
        return root;
}

void max_heap(Node* root){
	if(root==NULL)
		return;
	max_heap(root->next[0]);
	max_heap(root->next[1]);
	root->data=arr1[k++];
}

void in(Node* root){
	if(root==NULL)
		return;
	in(root->next[0]);
	arr1[c]=root->data;
	c++;
	in(root->next[1]);
}

void post(Node* root){
	if(root==NULL)
		return;
	post(root->next[0]);
	post(root->next[1]);
	cout<<root->data<<" ";
}

int main(int argc,char* argv[]) {
        int arr[argc],n=0;
        for(int i=1;i<argc;i++){
                arr[n]=atoi(argv[i]);
                n++;
        }
        Node* root=construct_bt(arr,root,0,n);
        in(root);
        max_heap(root);
	post(root);
        /*for(int i=0;i<c;i++)
		cout<<arr1[i];*/
        return 0;
}

