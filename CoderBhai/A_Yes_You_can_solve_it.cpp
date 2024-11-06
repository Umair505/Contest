#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    bool flag = true;
    for(int i=0;i<n;i++)
    {
        if(a[0]!=a[i])
        {
            flag =false;
            break;
        }
    }
    if(flag)
    {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    return 0;
}