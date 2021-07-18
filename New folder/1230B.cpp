#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<char,int>mp;
int main()
{
    ll n,k,cnt=0;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
            cnt++;
    }
    if(cnt==n)
    {
        cout<<s<<endl;
        return 0;
    }
    if(n==1 && k>0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    if(k>0)
    {
        int i=0;
        if(s[i]!='1')
        {
            s[i]='1';
            k--;
            i++;
        }
        else
            i++;
        while(i<n && k)
        {
            if(s[i]!='0')
            {
                s[i]='0';
                i++;
                k--;
            }
            else
                i++;
        }
    }
    cout<<s<<endl;
}
