#include <bits/stdc++.h>
using namespace std;
int main(){

    list<int> llist;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        llist.push_back(val);
     
    }
    llist.sort();
    llist.unique();
    for(int val: llist){
        cout<<val<<" ";
    }


return 0;
}