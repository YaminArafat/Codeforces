#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0,mx=-1;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    for(int i=0;i<s.size();i++)
    {
        sum+=mp[s[i]];
        mx=max(mx,mp[s[i]]);
    }
    if(k>=mx)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
