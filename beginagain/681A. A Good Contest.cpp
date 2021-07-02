#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,a,ans=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s>>b>>a;
        if(b>=2400)
        {
            if(a>b)
            {
                ans=1;
            }
        }
    }
    if(ans)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
