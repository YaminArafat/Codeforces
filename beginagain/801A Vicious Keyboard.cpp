#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='V' && i+1<s.size() && s[i+1]!='K')
        {
            if(i+2<s.size())
            {
                if(s[i+2]!='K')
                {
                    s[i+1]='K';
                    break;
                }
            }
            else
            {
                s[i+1]='K';
                break;
            }
        }
        if(s[i]=='K')
        {
            if(i+1<s.size() && s[i+1]=='K')
            {
                if(i>0)
                {
                    if(s[i-1]!='V')
                    {
                        s[i]='V';
                        break;
                    }
                }
                else
                {
                    s[i]='V';
                    break;
                }

            }
        }
    }
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]=='V' && s[i+1]=='K')
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}
