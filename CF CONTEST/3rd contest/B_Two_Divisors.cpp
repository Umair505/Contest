#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
        int a1,a2,r;
        if(a>b)
        {
            a1 = a;
            a2 = b;
        }
        else
        {
            a1 = b;
            a2 = a;
        }
    while(true)
    {
        r = a1%a2;
        if(r==0){
         return a2;
        }
        else
        {
            a1 = a2;
            a2 = r;
        }    
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b; cin>>a>>b;
        if(b%a==0)cout<<b*(b/a)<<endl;
        else cout<<b*(a/gcd(a,b))<<endl;//LCM formula
    }
     
    return 0;
}