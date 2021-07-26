#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,mx_a=0,mx_s=0,idx;
    cin>>n;
    long long sci[n+5];
    map<long long,long long>mp;
    for (int i=0; i<n; i++)
    {
        cin>>sci[i];
        mp[sci[i]]++;

    }
    cin>>m;
    long long audio[m+5],sub[m+5];

    for (int i=0; i<m; i++)
    {
        cin>>audio[i];
    }
    for (int i=0; i<m; i++)
    {
        cin>>sub[i];
    }
    for (int i=0; i<m; i++)
    {
        if(mp[audio[i]]>mx_a)
        {
            mx_a=mp[audio[i]];
            mx_s=mp[sub[i]];
            idx=i+1;
        }
        else if(mp[sub[i]]>mx_s)
        {
            if(mp[audio[i]]>=mx_a)
            {
                mx_a=mp[audio[i]];
                mx_s=mp[sub[i]];
                idx=i+1;
            }
        }
        else if(mp[audio[i]]==mx_a)
        {
            if(mp[sub[i]]>=mx_s)
            {
                mx_a=mp[audio[i]];
                mx_s=mp[sub[i]];
                idx=i+1;
            }
        }
    }
    cout<<idx<<endl;
    return 0;
}
