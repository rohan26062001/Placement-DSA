#include<bits/stdc++.h>

using namespace std;

class Node{
        int data;
        Node *left, *right;

    public:
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

        Node* Insert(Node* root, int item){
            if(root==NULL)
                return new Node(item);
            else if(root->data>item)
                root->left=Insert(root->left, item);
            else
                root->right=Insert(root->right, item);
        }
};

int main(){
    Node *b,  *root = new Node(5);
    root = b->Insert(root, 5);
    b->Insert(root, 4);
    b->Insert(root, 6);
    b->Insert(root, 2);
    b->Insert(root, 7);

    return 0;
}