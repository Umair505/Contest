#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        if(a==b || (a%2==0 && b%2==0) || (a%2!=0  && b%2!=0)) cout<<"Bob"<<endl;
        if((a%2!=0 && b%2==0)||(a%2==0 && b%2!=0)) cout<<"Alice"<<endl;
    }

    return 0;
}
