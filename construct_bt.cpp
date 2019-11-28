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

Node* construct_bt(int arr[],Node* root,int i,int n){
	if(i<n){
	Node* node=new Node(arr[i]);
	root=node;
	root->next[0]=construct_bt(arr,root->next[0],2*i+1,n);
	root->next[1]=construct_bt(arr,root->next[1],2*i+2,n);
	}
	return root;
}

void pre(Node* root) {
	if(root==NULL)
		return;
	cout<<root->data;
	pre(root->next[0]);
	pre(root->next[1]);
}

int main(int argc,char* argv[]) {
	int arr[argc],n=0;
	for(int i=1;i<argc;i++){
		arr[n]=atoi(argv[i]);
		n++;
	}
	Node* root=construct_bt(arr,root,0,n);
	pre(root);
	return 0;
}
