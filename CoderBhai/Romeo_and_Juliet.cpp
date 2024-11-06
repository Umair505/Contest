#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> ar[N];
int vis[N];
int level[N];
int level2[N];
int vis2[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int val = q.front();
        q.pop();
        for (int child : ar[val])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[val] + 1;
            }
        }
    }
}
void sec_bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis2[src] = true;
    level2[src] = 0;
    while (!q.empty())
    {
        int val = q.front();
        q.pop();
        for (int child : ar[val])
        {
            if (vis2[child] == false)
            {
                q.push(child);
                vis2[child] = true;
                level2[child] = level2[val] + 1;
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
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    int src, des, k;
    cin >> src >> des >> k;
    bfs(src);
    if (vis[des] == true)
    {
        sec_bfs(des);
        if (level[des] <= k)
        {
            cout << "YES" << endl;
        }
        else if (level[des] % 2 != 0 && ((level[des] / 2) + (level2[src] / 2)) <= k)
        {
            cout << "YES" << endl;
        }
        else if (level[des] % 2 == 0 && level[des] / 2 <= k)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
const int N= 1e15+5;
vector<int>v[1000];
int vis[1000];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par  = q.front();
        q.pop();
        for(int child : v[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
            }
        }
    }
    
}
int main()
{
    int n,e;
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    int r,j,stp;
    cin>>r>>j>>stp;
    bfs(r);
    bfs(j);
    return 0;
}
*/