#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s,t,p="";
    cin>>s>>t;
    int cnt_s=0,cnt_t=0;
    for(int i=0; i<s.size(); i++)
    {
        p+="0";
        if(s[i]=='1')
            cnt_s++;
        if(t[i]=='1')
            cnt_t++;
    }
    if((cnt_s+cnt_t)%2)
    {
        cout<<"impossible"<<endl;
        return 0;
    }
    if(cnt_s==cnt_t)
    {
        cout<<p<<endl;
        return 0;
    }
    for(int i=0; i<s.size(); i++)
    {
        if(cnt_s>cnt_t)
        {
            if(s[i]!=p[i] && t[i]==p[i])
            {
                p[i]='1';
                cnt_s--;
                cnt_t++;
            }
        }
        else if(cnt_s<cnt_t)
        {
            if(t[i]!=p[i] && s[i]==p[i])
            {
                p[i]='1';
                cnt_t--;
                cnt_s++;
            }
        }
        else
            break;
    }
    cout<<p<<endl;
    return 0;
}
