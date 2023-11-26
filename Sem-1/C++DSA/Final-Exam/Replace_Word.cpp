#include <bits/stdc++.h>
using namespace std;
int main(){

    int testcase;
    cin>>testcase;
    while(testcase !=0 ){
        string s, p;
        cin>>s>>p;

       while(s.find(p) != -1){
        s.replace(s.find(p), p.length(), "#");
       } 
       cout<<s<<endl;
       testcase--;
    }

return 0;
}