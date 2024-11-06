#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a;
        cin>>a;
        string s;
        cin>>s;
        int maxm = INT_MIN;
        for(int i=0;i<a;i++)
        {
            maxm = max(s[i]-'a' + 1,maxm);
        }
        cout<<maxm<<endl;
    }
     
    return 0;
}