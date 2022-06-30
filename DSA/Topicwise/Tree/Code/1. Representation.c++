#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node *left, *right;

        Node(int x){
            this->data=x;
            this->left=NULL;
            this->right=NULL;
        }
};

int main(){
    Node *root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(6);

    cout<<root->data<<" "<<root->left->data<<" "<<root->right->data<<endl;

    return 0;
}