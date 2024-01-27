// #include <bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//         int val;
//         Node *nxtNodeAdr;

//         Node(int val){
//             this->val=val;
//             this->nxtNodeAdr=NULL;
//         }
// };

// void insert(Node *&head, Node *&tail, int v){
//     Node *newNode = new Node(v);



//     if(head == NULL){
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     tail->nxtNodeAdr=newNode;
//     tail=newNode;
// }

// int size(Node *head){
//     Node *tmp=head;
//     int cnt=0;
//     while(tmp!=NULL){
//         cnt++;
//         tmp=tmp->nxtNodeAdr;
//     }
//     return cnt;
// }

// void delete_head(Node *&head){
//     Node *delHead= head;
//     head = head->nxtNodeAdr;
//     delete delHead;
//     // cout<<endl<<endl<<"Head Deleted"<<endl<<endl;
// }

// void printList(Node *head){
//     Node *tmp = head;

//     while(tmp != NULL){
//         cout<<tmp->val<<" ";
//         tmp=tmp->nxtNodeAdr;
//     }
//     cout<<endl;
// }

// void insert_at_head(Node *&head, int v){
//     Node *newNode = new Node(v);
//     newNode->nxtNodeAdr=head;
//     head=newNode;
// }

// // void insert_tail(Node *&head, Node *&tail, int val)
// // {
// //     Node *newNode = new Node(val);
// //     if (head == NULL)
// //     {
// //         head = newNode;
// //         tail = newNode;
// //         return;
// //     }
// //     tail->nxtNodeAdr = newNode;
// //     tail = newNode;
// // }


// void delete_from_any_pos(Node *head, int pos){
//     Node *tmp =head;
//     for(int i=1; i<pos-1; i++){
//         tmp=tmp->nxtNodeAdr;
//     }
//     Node *delNode = tmp->nxtNodeAdr;
//     tmp->nxtNodeAdr=tmp->nxtNodeAdr->nxtNodeAdr;

//     delete delNode;
// }


// void delete_tail(Node *head, Node *&tail)
// {
//     Node *tmp = head;
//     while (tmp->nxtNodeAdr->nxtNodeAdr != NULL)
//     {
//         tmp = tmp->nxtNodeAdr;
//     }

//     Node *deleteNode = tmp->nxtNodeAdr;
//     tmp->nxtNodeAdr = NULL;
//     tail = tmp;
//     delete deleteNode;
// }

// int main(){

//     int q;
//     cin >> q;
//     Node *head = NULL;
//     Node *tail = NULL;
//     while (q > 0)
//     {
//         int x, v;
//         cin >> x >> v;

//         if (x == 0)
//         {
//             if (head == NULL)
//             {
//                 insert(head, tail, v);
//             }
//             else
//             {
//                 insert_at_head(head, v);
//             }
//         }
//         else if (x == 1)
//         {
//             insert(head, tail, v);
//         }
//         else
//         {
//             if (v < size(head))
//             {
//                 if (v == 0)
//                 {
//                     delete_head(head);
//                 }
//                 else if (v == size(head) - 1)
//                 {
//                     delete_tail(head, tail);
//                 }
//                 else
//                 {
//                     delete_from_any_pos(head, v);
//                 }
//             }
//         }
//         printList(head);
//         q--;
//     }

// return 0;
// }








#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *nxtNodeAdr;

        Node(int val){
            this->val=val;
            this->nxtNodeAdr=NULL;
        }
};

void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->nxtNodeAdr;
    }
    cout << endl;
}

void insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->nxtNodeAdr;
    }
    newNode->nxtNodeAdr = tmp->nxtNodeAdr;
    tmp->nxtNodeAdr = newNode;
}
void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->nxtNodeAdr = head;
    head = newNode;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->nxtNodeAdr = newNode;
    tail = newNode;
}

void delete_node(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->nxtNodeAdr;
    }
    Node *deleteNode = tmp->nxtNodeAdr;
    tmp->nxtNodeAdr = tmp->nxtNodeAdr->nxtNodeAdr;
    delete deleteNode;
}

void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->nxtNodeAdr;
    delete deleteNode;
}

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->nxtNodeAdr;
    }
    return count;
}

void delete_tail(Node *head, Node *&tail)
{
    Node *tmp = head;
    while (tmp->nxtNodeAdr->nxtNodeAdr != NULL)
    {
        tmp = tmp->nxtNodeAdr;
    }

    Node *deleteNode = tmp->nxtNodeAdr;
    tmp->nxtNodeAdr = NULL;
    tail = tmp;
    delete deleteNode;
}

int main()
{

    int q;
    cin >> q;
    Node *head = NULL;
    Node *tail = NULL;
    while (q > 0)
    {
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
                insert_head(head, v);
            }
        }
        else if (x == 1)
        {
            insert_tail(head, tail, v);
        }
        else
        {
            if (v < size(head))
            {
                if (v == 0)
                {
                    delete_head(head);
                }
                else if (v == size(head) - 1)
                {
                    delete_tail(head, tail);
                }
                else
                {
                    delete_node(head, v);
                }
            }
        }
        print_linekd_list(head);
        q--;
    }
    return 0;
}











