#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int t;
    cin>>t;
    stack<char>st;
    bool flag;
    while (t--)
    {
        int a,b;
        for(int i=a;i<=b;i++)
        {
              if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else
            {
                if(!st.empty())
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    if(s[i]==')' && st.top()=='(')
                    {
                        st.pop();
                    }
                }
            }
        }
        if(st.empty())
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    
    return 0;
}