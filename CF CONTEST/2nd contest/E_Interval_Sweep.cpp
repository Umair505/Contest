#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,odd,even;
    cin>>a>>b;
    int sum = a+b;
    if(a==0 && b==0){
        cout<<"NO";
        return 0;
    }
    if(sum%2==0)
    {
        odd=sum/2;
        even = sum/2;
    } 
    else
    {
        odd=sum/2 + 1;
        even = sum/2 +1;
    }

    if(odd>=a && even>=b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}