#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int pref[n];
    pref[0]=a[0];

    for(int i=1; i<n; i++){
        pref[i]=pref[i-1]+a[i];
    }
    reverse(pref, pref+n);
    for(int i=0; i<n; i++){
        cout<<pref[i]<<" ";
    }
    // for(int i=4; i>=0; i++){
    //     cout<<pref[i]<<" ";
    // }
   
    


return 0;
}