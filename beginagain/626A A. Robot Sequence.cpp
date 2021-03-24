#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,h=0,v=0,ans=0;
    cin>>n;
    string s,tmp;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        k=n;
        k--;
        for(;k>i;k--)
        {
            tmp=s.substr(i,k-i+1);
            //cout<<tmp<<endl;
            for(int m=0; m<tmp.size(); m++)
            {
                if(tmp[m]=='U')
                {
                    v++;
                }
                else if(tmp[m]=='D')
                {
                    v--;
                }
                else if(tmp[m]=='R')
                {
                    h++;
                }
                else
                {
                    h--;
                }
            }
            if(!h && !v)
            {
                ans++;
            }
            h=0;
            v=0;
        }
    }
    cout<<ans<<endl;
}
