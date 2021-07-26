#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        if(s.size()<11)
            cout<<"NO"<<endl;
        else if(s.size()==11)
        {
            if(s[0]=='8')
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            bool f=false;
            for(int i=0; i<=s.size()-11; i++)
            {
                if(s[i]=='8')
                {
                    cout<<"YES"<<endl;
                    f=true;
                    break;
                }
            }
            if(!f)
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
