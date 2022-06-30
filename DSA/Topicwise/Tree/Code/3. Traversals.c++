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

        void Inorder(Node *root){
            if(root==NULL)
                return;
            Inorder(root->left);
            cout<<root->data<<" ";
            Inorder(root->right);
        }

        void Preorder(Node *root){
            if(root==NULL)
                return;
            cout<<root->data<<" ";
            Preorder(root->left);
            Preorder(root->right);
        }

        void Postorder(Node *root){
            if(root==NULL)
                return;
            Postorder(root->left);
            Postorder(root->right);
            cout<<root->data<<" ";
        }

        vector<vector<int>> LevelOrder(Node *root){
            queue<Node*> q;
            vector<vector<int>> v;
            if(root==NULL)
                return v;
            q.push(root);
            while(!q.empty()){
                int size = q.size();
                vector<int> l;
                for(int i=0; i<size; ++i){
                    Node* node = q.front();
                    q.pop();
                    if(node->left!=NULL)    q.push(node->left);
                    if(node->right!=NULL)    q.push(node->right);
                    l.push_back(node->data);
                }
                v.push_back(l);
            }
            return v;
        }
};

int main(){
    Node *b,  *root=NULL;
    root = b->Insert(root, 5);
    b->Insert(root, 4);
    b->Insert(root, 6);
    b->Insert(root, 2);
    b->Insert(root, 7);

    cout<<"Inorder:"<<endl;
    b->Inorder(root);
    cout<<endl;

    cout<<"Preorder:"<<endl;
    b->Preorder(root);
    cout<<endl;

    cout<<"Postorder:"<<endl;
    b->Postorder(root);
    cout<<endl;

    cout<<"Levelorder:"<<endl;
    vector<vector<int>> v = b->LevelOrder(root);
    for(int i=0; i<v.size(); ++i){
        for(auto it: v[i])
            cout<<it<<",";
        cout<<endl;
    }

    return 0;
}