#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> oddQ;
    priority_queue<int, vector<int>, greater<int>> evenQ;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
            {
                evenQ.push(a);
            }
            else
            {
                oddQ.push(a);
            }
        }
        if (x == 2)
        {
            if (!evenQ.empty())
            {
                cout << evenQ.top() << endl;
                evenQ.pop();
            }
            else
                cout << "empty" << endl;
        }
        if(x==3)
        {
             if (!oddQ.empty())
            {
                cout << oddQ.top() << endl;
                oddQ.pop();
            }
            else
                cout << "empty" << endl;
        }
    }

    return 0;
}