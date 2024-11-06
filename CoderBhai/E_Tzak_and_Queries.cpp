#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M; 

    unordered_set<string> items;
    for (int i = 0; i < N; ++i)
    {
        string item;
        cin >> item;
        items.insert(item);
    }

    int cnt = 0;
    for (int i = 0; i < M; i++)
    {
        int q;
        cin >> q; 
        bool flag = true;
        for (int j = 0; j < q; j++)
        {
            string s2;
            cin >> s2;
            if (items.find(s2) == items.end())
            {
                flag = false;
            }
        }

        if (flag)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}