#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int row,col;
    for (row = 0; row < n;row++) {
        for (col = 0; col < n; col++) {
            if (col == row || col == (n - 1 - row))
                cout << '*';
            else if(col<row)
            {
                cout<<0;
            }
            else cout<<7;
        }
        cout << endl;
    }

    return 0;
}
