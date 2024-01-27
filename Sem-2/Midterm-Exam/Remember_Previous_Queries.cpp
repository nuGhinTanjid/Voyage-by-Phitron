#include <bits/stdc++.h>
using namespace std;
int main(){

    list<int> doubly;
    int q;
    cin>>q;
    while(q--){
        int x, v;
        cin>>x>>v;
        if(x==0){
            doubly.push_front(v);
        }
        else if(x==1){
            doubly.push_back(v);
        }
        else if(x==2){
             if (v >= doubly.size()) {
                // Invalid index, skip the current iteration
                // continue;
                cout<<NULL<<endl;
            } else {
                doubly.erase(next(doubly.begin(), v));
            }
        }
        cout<<"L -> ";
        for(int val: doubly){
            cout<<val<<" ";
        }
        cout<<endl;
        doubly.sort(greater<int>());
         cout<<"R -> ";
        for(int val: doubly){
            cout<<val<<" ";
        }
        cout<<endl;
        
    }

return 0;
}






























#include <bits/stdc++.h>
using namespace std;
int main(){

    list<int> doubly;
    int q;
    cin>>q;
    while(q--){
        bool flag=false;
        int x, v;
        cin>>x>>v;
        if(x==0){
            doubly.push_front(v);
        }
        else if(x==1){
            doubly.push_back(v);
        }
        else if(x==2){
             if (v >= doubly.size()) {
                flag=true;
            } else {
                doubly.erase(next(doubly.begin(), v));
            }
        }
        
        if(flag==true){
            cout<<"L -> ";
        for(int val: doubly){
            cout<<val<<" ";
        }
        cout<<endl;
         cout<<"R -> ";
        for (auto it = prev(doubly.end()); it != prev(doubly.begin()); --it) {
            cout << *it << " ";
        }
        cout<<endl;
        }
        
        
        else{
            cout<<"L -> ";
        for(int val: doubly){
            cout<<val<<" ";
        }
        cout<<endl;
         cout<<"R -> ";
        for (auto it = prev(doubly.end()); it != prev(doubly.begin()); --it) {
            cout << *it << " ";
        }
        cout<<endl;
        }
        

    }

return 0;
}