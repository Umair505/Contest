#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    } 
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(v[i] > v[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt-1;
    return 0;
}