#include <bits/stdc++.h>
using namespace std;
int main(){

    list<string> brower;
    string s;
    while(true){
        cin>>s;
        if( s =="end"){
            break;
        }
        brower.push_back(s);
    }

    int q;
    cin>>q;

    auto pos=brower.begin();

    while(q--){
        string com, add;
        cin>>com;

        if(com=="visit"){
           cin>>add;
           auto it =find(brower.begin(), brower.end(), add) ;

           if(it!= brower.end()){
            pos=it;
            cout<<*pos<<endl;
           }
           else{
            cout<<"Not Available"<<endl;
           }
        }

        else if(com=="next"){
            if(next(pos) != brower.end()){
                pos++;
                cout<<*pos<<endl;
            }
            else{
                cout<<"Not Available"<<endl;
            }
        }

        else if(com == "prev"){
            if(pos!=brower.begin()){
                pos--;
                cout<<*pos<<endl;
            }
            else{
                cout<<"Not Available"<<endl;
            }
        }
    }

return 0;
}