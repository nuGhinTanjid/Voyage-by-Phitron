/*  

\   /   \  /
 \ /
  X
 / \
/   \  

*/




#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int s=0, b=0;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=s; j++)
        {
            cout<<" ";
           
        }
        // for(int j=0; j<n; j++)
        // {
        //     cout<<"\\";
        // }
        s++;
        cout<<"\\"<<"\\/";
        cout<<endl;
        // for(int j=1; j<=s; j++)
        // {
        //     cout<<" ";
           
        // }
        //  s++;
        // cout<<"\/";
        // cout<<endl;
        
    }

return 0;
}