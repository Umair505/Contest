#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        int rem = 2023, possible = 1; 
        cin >> n >> k;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            possible &= (rem % x == 0);
            rem /= x;
        } 
        if (!possible) 
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << rem << " ";
            for(int i = 1; i < k; i++) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
