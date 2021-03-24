#include <bits/stdc++.h>
using namespace std;
int arr[200005];
int main()
{
    string s,ans="";
    char prev='/0';
    cin>>s;
    int cnt=1,rset=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=prev)
        {
            prev=s[i];
            ans+=s[i];
            if(cnt==2)
                cnt=1;
            else
                rset=0;
        }
        else
        {
            if(cnt<2)
            {
                cnt++;
                if(!rset)
                {
                    ans+=s[i];
                    rset=1;
                }
                else
                    rset=0;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
