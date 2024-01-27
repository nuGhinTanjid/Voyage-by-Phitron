#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string sen;
        getline(cin, sen);
        stringstream ss(sen);
        map<string, int> mp;

        string maxWord;
        int maxCount = 0;

        string word;
        while (ss >> word) {
            mp[word]++;
            if(mp[word]>maxCount){
                maxCount=mp[word];
                maxWord=word;
            }
        }
            cout << maxWord << " " << maxCount << endl;
    }

    return 0;
}
