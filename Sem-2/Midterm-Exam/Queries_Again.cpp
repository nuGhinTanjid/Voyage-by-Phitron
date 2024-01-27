#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node *prev;
        Node(int val){
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};

void insert_tail(Node *&head, Node *&tail, int v){
    Node *newNode = new Node(v);
    if(tail==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}

void print(Node *head){
    cout<<"L -> ";
    Node *tmp= head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;

    }
    cout<<endl;
}

void reverse(Node *tail){
    cout<<"R -> ";
    Node *tmp= tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}

void insert_pos(Node *head, int pos, int v){
    Node *newNode=new Node(v);
    Node *tmp=head;
    for(int i=1; i<=pos-1; i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
}


int size(Node *head){
    Node *tmp=head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
int main(){

    int q; 
    cin>>q;

     Node *head= NULL;
     Node *tail= NULL;

    while(q--){
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            if (head == NULL)
            {
                insert_tail(head, tail, v);
            }
            else
            {
                insert_head(head, tail, v);
            }
            print(head);
            reverse(tail);
        }
        else if (x > size(head))
        {
            cout << "Invalid" << endl;
        }
        else if (x < size(head))
        {
            insert_pos(head, x, v);
            print(head);
            reverse(tail);
        }
        else
        {
            insert_tail(head, tail, v);
            print(head);
            reverse(tail);
        }

        
    }

return 0;
}