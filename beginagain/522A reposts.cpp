#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=-1;
    cin>>n;
    string s1[n+5];
    string s2;
    string s3[n+5];
    map<string,int>mp;
    for (int i=0;i<n;i++)
    {
        cin>>s1[i]>>s2>>s3[i];
        transform(s1[i].begin(),s1[i].end(),s1[i].begin(),::tolower);
        transform(s3[i].begin(),s3[i].end(),s3[i].begin(),::tolower);
    }
    mp[s3[0]]=1;
    for(int i=0;i<n;i++)
    {
        mp[s1[i]]=mp[s3[i]]+1;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[s1[i]]>mx)
        {
            mx=mp[s1[i]];
        }
    }
    cout<<mx<<endl;
}
