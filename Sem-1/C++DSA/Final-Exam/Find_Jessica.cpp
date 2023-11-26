#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    string foud="Jessica";
    bool flag=false;

    while(ss>>word){
        if(word ==foud ){
            flag=true;
            break;
        }  
    }
    if(flag==true){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }


return 0;
}