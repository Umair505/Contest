#include<bits/stdc++.h>
using namespace std;
void elimination(string s)
{
    stack<char>st;
    for(char c:s)
    {
        if(c=='0')
        {
            st.push(c);
        }
        else if(c=='1')
        {
            if(!st.empty() && st.top()=='1')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
       
    }
    
}
int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        string s;
        cin>>s;
        elimination(s);
    }
     
    return 0;
}

