#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c;
    cin>>c;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i] = a[i] + c*2;
    } 
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}