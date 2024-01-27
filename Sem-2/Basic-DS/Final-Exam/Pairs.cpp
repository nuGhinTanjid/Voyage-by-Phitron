#include <bits/stdc++.h>
using namespace std;

class Pair{
    public:
        string name;
        int num;
};
bool cmp(Pair a, Pair b){
    if(a.name == b.name) return a.num>b.num;

    else if(a.name<b.name) return true;
    
    else return false;
}
int main(){

    int n; cin>>n;
    vector<Pair> pairs(n);
    for(int i=0; i<n; i++){
        cin>>pairs[i].name>>pairs[i].num;
    }

    sort(pairs.begin(), pairs.end(), cmp);

    for(Pair p: pairs){
        cout<<p.name<<" "<<p.num<<endl;
    }


return 0;
}