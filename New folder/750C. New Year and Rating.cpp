#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,p,q,cnt=0;
    cin>>n;
    vector<ll>ratng,div;
    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        ratng.push_back(p);
        div.push_back(q);
        if(q==1)
            cnt++;
    }
    if(cnt==n)
    {
        cout<<"Infinity"<<endl;
        return 0;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(!i)
            {
                if(div[i]==1)
                    init=1900;
                else

            }
        }
    }

}
