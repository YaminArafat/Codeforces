#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q,s_size,f=0;
    cin>>q;
    string s,t;
    while(q--)
    {
        cin>>s>>t;
        s_size=s.size();
        f=0;
        for(int i=0; i<s_size; i++)
        {
            for(int j=0; j<s_size; j++)
            {
                if(s[i]==t[j])
                {
                    f=1;
                    break;
                }
                if(f)
                    break;
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
