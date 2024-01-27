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

// void print(Node *head){
//     Node *tmp = head;
//     while(tmp!=NULL){
//         cout<<tmp->val<<" ";
//         tmp=tmp->nxtNodeAdr;
//     }
// }

// int main(){  
//     int q; cin>>q;
//     while(q--){

//     Node *head=NULL;
//     Node *tail=NULL;
//     int value;
//     while(true){
//         cin>>value;
//         if(value==-1)break;
//         insert(head, tail, value);
//     }

//     for(Node *i=head; i->nxtNodeAdr!=NULL; i=i->nxtNodeAdr){
//         for(Node *j=i->nxtNodeAdr; j != NULL; j=j->nxtNodeAdr){
//             if(i->val > j->val){
//                 swap(i->val, j->val);
//             }
//         }
//     }
//         int x;
//         cin>>x;
//         Node *l= head;
//         Node *r = tail;
//         bool flag=false;

//         while(l <= r){
//            int mid= (l->val + r->val) /2;
//            if(mid==x){
//             flag=true;
//             break;
//            }
//            if(x>mid){
//             l=l->nxtNodeAdr;
//            }
//            else{
//             r=r->nxtNodeAdr;
//            }
//         }
//         if(flag==true){
//             cout<<"Found"<<l->nxtNodeAdr->val<<endl;
//             //cout<<head->nxtNodeAdr->val<<endl;
//         }
//         else{
//             cout<<"-1"<<endl;
//         }
       
//     }
    
// return 0;
// }


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

// void print(Node *head){
//     Node *tmp = head;
//     while(tmp!=NULL){
//         cout<<tmp->val<<" ";
//         tmp=tmp->nxtNodeAdr;
//     }
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

// int main(){

//     int q; cin>>q;
//     while(q--){


//     Node *head=NULL;
//     Node *tail=NULL;
//     int value;
//     while(true){
//         cin>>value;
//         if(value==-1)break;
//         insert(head, tail, value);
//     }

//     int x; cin>>x;
//     bool flag=false;

//     for(Node *i=head; i !=NULL; i=i->nxtNodeAdr){
//         //cout<<i->val<<endl;

//         if(x==i->val){
//             // cout<<head->nxtNodeAdr->val<<endl;
//             flag=true;
//         }
        
//     }

//     if(flag==true){
//         cout<<head->nxtNodeAdr->val<<endl;
//     }
//     else{
//             cout<<"-1"<<endl;
//         }

//     head=NULL;
//     }

    
// return 0;
// }
















// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node *nxtNodeAdr;

//     Node(int val) {
//         this->val = val;
//         this->nxtNodeAdr = NULL;
//     }
// };

// void insert(Node *&head, Node *&tail, int v) {
//     Node *newNode = new Node(v);

//     if (head == NULL) {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->nxtNodeAdr = newNode;
//     tail = newNode;
// }

// int main() {
//     int q;
//     cin >> q;

//     while (q--) {
//         Node *head = NULL;
//         Node *tail = NULL;
//         int value;

//         while (true) {
//             cin >> value;
//             if (value == -1)
//                 break;
//             insert(head, tail, value);
//         }

//         int x;
//         cin >> x;
//         bool flag = false;
//         int index = 0;

//         for (Node *i = head; i != NULL; i = i->nxtNodeAdr) {
//             if (x == i->val) {
//                 cout << index << endl;
//                 flag = true;
//                 break;
//             }
//             index++;
//         }

//         if (!flag) {
//             cout << -1 << endl;
//         }
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *nxtNodeAdr;

    Node(int val) {
        this->val = val;
        this->nxtNodeAdr = NULL;
    }
};

void insert(Node *&head, Node *&tail, int v) {
    Node *newNode = new Node(v);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->nxtNodeAdr = newNode;
    tail = newNode;
}

int main() {
    int q;
    cin >> q;

    while (q--) {
        Node *head = NULL;
        Node *tail = NULL;
        int value;

        while (true) {
            cin >> value;
            if (value == -1)
                break;
            insert(head, tail, value);
        }

        int x;
        cin >> x;
        bool flag = false;
        int index = 0;

        for (Node *i = head; i != NULL; i = i->nxtNodeAdr) {
            if (x == i->val) {
                flag = true;
                break;
            }
            index++;
        }

        if (flag==true) {
            cout << index << endl;
        }
        else{
            cout<< -1<<endl;
        }
    }
   
    return 0;
}
