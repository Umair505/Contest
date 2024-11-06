#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt1= 0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1' && s[i+1]=='0')
            cnt1++;
            if(s[i]=='0' && s[i+1]=='1')
            cnt2++;
        }
        cout<<cnt1+cnt2<<endl;
    }
    return 0;
}