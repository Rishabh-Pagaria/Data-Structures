#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = right = NULL;
    }
};
int height(node* root){
    if(root == NULL){
        return 0;
    }
    //computing the height of each subtree
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    //whichever side's height is more that will be the height of the tree
    if(lHeight > rHeight){
        return (lHeight + 1);
    }else{
        return (rHeight + 1);
    }
};
void currentLevel(node* root, int level){
    if(root == NULL){
        return;
    }
    if(level == 1){
        cout<<root->data;
    }
    if(level > 1){
        currentLevel(root->left, level - 1);
        currentLevel(root->right, level - 1);
    }
};

void levelOrder(node* root){
    int h = height(root);
    for(int i = 1; i <= h; i++){
        currentLevel(root, i);
    }
};


int main(){
    node* root = new node(10);
    root->left = new node(12);
    root->right = new node(14);
    root->left->left = new node(6);
    root->left->right = new node(4);
    levelOrder(root);
    return 0;
}