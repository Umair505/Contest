#include<bits/stdc++.h>
using namespace std;

void elimination(string s) {
    int cur = 0, mx = 0;
    int n = s.size();
    s.push_back('x');
    s.push_back('x');

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            cur++;
            mx = max(cur, mx);
        } else if (s[i] == '1' && s[i + 1] == '1') {
            i++;
            continue;
        } else {
            cur = 0;
        }
        
        if (s[i + 1] == 'x') break;
    }
    
    cout << mx << endl;
}

int main() {
    int q;
    cin >> q;

    while (q--) {
        string s;
        cin >> s;
        elimination(s);
    }

    return 0;
}
