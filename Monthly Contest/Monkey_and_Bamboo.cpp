#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int h,a,b;
        cin>>h>>a>>b;
        int ans = (ceil((h-a)/(a-b))+1)*2-1;
        if(ans>0)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        }
    } 
    return 0;
}