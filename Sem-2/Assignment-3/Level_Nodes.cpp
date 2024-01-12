#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
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
int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}

void level_nodes(Node *root)
{
    int x;
    cin >> x;
    if (maxHeight(root) - 1 < x)
    {
        cout << "Invalid" << endl;
    }
    else if (x == 0)
    {
        cout << root->val << endl;
    }
    else
    {
        queue<pair<Node *, int>> q;
        if (root)
            q.push({root, 0});

        while (!q.empty())
        {
            pair<Node *, int> pr = q.front();
            Node *node = pr.first;
            int lvl = pr.second;

            q.pop();

            if (x == lvl)
            {
                cout << pr.first->val << " ";
            }

            if (node->left)
                q.push({node->left, lvl + 1});
            if (node->right)
                q.push({node->right, lvl + 1});
        }
    }
}

int main()
{
    Node *root = input_tree();
    level_nodes(root);
    return 0;
}
