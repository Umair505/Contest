#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int minm=INT_MAX,sminm = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<minm)
        {
            sminm = minm;
            minm = a[i];
        }
        else if(a[i]<sminm)
        {
            sminm = a[i];
        }
    }
    cout<<minm+sminm<<endl;
    return 0;
}