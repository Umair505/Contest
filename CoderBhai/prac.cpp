#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
int vis1[N];
int vis2[N];
int level[N];
int level2[N];
void bfsr(int src)
{
    queue<int> q;
    q.push(src);
    vis1[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (!vis1[child])
            {
                q.push(child);
                vis1[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }
}
void bfsj(int src)
{
    queue<int> q;
    q.push(src);
    vis2[src] = true;
    level2[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (!vis2[child])
            {
                q.push(child);
                vis2[child] = true;
                level2[child] = level2[par] + 1;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(level, -1, sizeof(level));
    int src, des, stp;
    cin >> src >> des >> stp;
    bfsr(src);
 
    if (vis1[des] == true)
    {
        bfsj(des);
        if (level[des] <= stp)
        {
            cout << "YES";
        }
        else if (level[des] % 2 != 0 && (level[des] / 2 + level2[src] / 2) <= stp)
        {
            cout << "YES";
        }
        else if(level[des]%2==0 && (level[des]/2)<=stp)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    else
    {
        cout << "NO";
    }
    return 0;
}