#include<bits/stdc++.h>
using namespace std;
 bool pile_of_word(string s1,string s2)
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1==s2;
    }
int main()
{
    int n;
    cin>>n;
   
    while (n--)
    {
       string s1,s2;
       cin>>s1>>s2;
       if(pile_of_word(s1,s2))
       {
        cout<<"YES"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }
       
    }
    
    return 0;
}