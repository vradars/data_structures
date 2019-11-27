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
        if(arr[i]!=-1 && i<n){
        Node* node=new Node(arr[i]);
        root=node;
        root->next[0]=construct_bt(arr,root->next[0],2*i+1,n);
        root->next[1]=construct_bt(arr,root->next[1],2*i+2,n);
        }
        return root;
}
int sum=0,c=0;
void find_sum(Node* root,int k){
        if(root==NULL)
                return;
        find_sum(root->next[0],k);
	if(c<k){
		sum=sum+root->data;
		c++;
		}
	find_sum(root->next[1],k);

}

int main(int argc,char* argv[]) {
        int arr[argc],n=0;
	int k=atoi(argv[1]);
        for(int i=2;i<argc;i++){
                arr[n]=atoi(argv[i]);
                n++;
        }
        Node* root=construct_bt(arr,root,0,n);
//        pre(root);
        find_sum(root,k);
        cout<<sum;      
        return 0;
}

