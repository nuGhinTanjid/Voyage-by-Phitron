#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        stack<char> st;
        string s;
        cin >> s;

        bool isBalanced = true;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {
                st.push('0');
            } else {
                if (!st.empty() && st.top() == '0') {
                    st.pop();
                } else {
                    isBalanced = false;
                    break;
                }
            }
        }

        if (st.empty() && isBalanced) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}