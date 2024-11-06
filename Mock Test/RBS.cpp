#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==')')cnt++;
            if(s[i]=='(')cnt2++;
        }
        if(cnt==cnt2)
        {
            cout<<"Possible"<<endl;
        }
        else cout<<"Impossible"<<endl;

    }
     
    return 0;
}