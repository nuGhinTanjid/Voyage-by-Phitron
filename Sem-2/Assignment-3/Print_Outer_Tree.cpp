#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *left;
        Node *right;

        Node(int val){
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
};

Node *input_tree()
{

    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        // 2.jabotio kaj
        int l, r;
        cin >> l >> r;
        Node *myleft;
        Node *myright;

        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        // connecting with parent node
        p->left = myleft;
        p->right = myright;

        // 3.children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void outer_tree(Node *root){
    if(root==NULL) return;
    if(root->left) {outer_tree(root->left);}
    else{outer_tree(root->right);}
    
    cout<<root->val<<" ";
}
void outer_tree1(Node *root){
    if(root==NULL) return;
   
    cout<<root->val<<" ";
   
    if(root->right){
        outer_tree1(root->right);
    }
    else{
        outer_tree1(root->left);
    }
    
    
}

int main(){

    
    Node* root=input_tree();
    if(root->left) outer_tree(root->left);
    cout<<root->val<<" ";
    if(root->right) outer_tree1(root->right);

return 0;
}