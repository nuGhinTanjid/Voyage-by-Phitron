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
void level_order(Node *root){
    vector<int> v;

    int sum=0;
    if(root==NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node *p=q.front();
        q.pop();

        if(p->left==NULL && p->right==NULL){
            v.push_back(p->val);
        }

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }
    sort(v.begin(), v.end(), greater<int>());
    
    for(int valuee: v){
        cout<<valuee<<" ";
    }  
}
int main() {
    Node *root = input_tree();
    
    level_order(root);

    return 0;
}

