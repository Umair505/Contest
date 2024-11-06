#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag = true;
    while(n>=3)
    {
        if(n%3!=0)
        {
            flag = false;
        }
        n/=3;
    }
    if(flag == true) cout<<"YES";
    else cout<<"NO";
    return 0;
}