#include <bits/stdc++.h>
using namespace std;
int main(){

    stack<char> st;
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        for(char c: s){
        if(c=='0'){
            if(!st.empty() && st.top()=='1'){
                st.pop();
            }
            else{
                st.push('0');
            }
        }
        else{
            if(!st.empty() && st.top()=='0'){
                st.pop();
            }
            else{
                st.push('1');
            }
        }
    }
    if(st.empty()==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    while(!st.empty()){
        st.pop();
    }
 }
return 0;
}