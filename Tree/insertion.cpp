#include <iostream>
#include <queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    };
};
node* insertNode(node* root, int data){
    node* newNode = new node(data);
    
    if(root == NULL){
        root = newNode;
        return root;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        
        if(temp->left != NULL){
            q.push(temp->left);
        }else{
            temp->left = new node(data);
            return root;
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }else{
            temp->right = new node(data);
            return root;
        }
    }
    
    
};
int main() {
	node* root;
	
	root = insertNode(root, 10);
	root = insertNode(root, 9);
	cout<<root->left->data;
	
	return 0;
}