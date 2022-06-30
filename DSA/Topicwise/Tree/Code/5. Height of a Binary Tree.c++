#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node *left, *right;

        Node(){
            this->data=0;
            this->left=NULL;
            this->right=NULL;
        }

        Node(int x){
            this->data=x;
            this->left=NULL;
            this->right=NULL;
        }

        int Height(Node *root){
            if(root==NULL)
                return 0;
            
            int leftHeight = Height(root->left);
            int rightHeight = Height(root->right);

            return 1+max(leftHeight, rightHeight);
        }
};

int main(){
    Node *root = new Node(1), *b;

    root->left = new Node(2);
    root->right = new Node(5);

    root->left->left = new Node(3);
    root->left->right = new Node(4);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int height = b->Height(root);
    cout<<height<<endl;
}