#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,limit,in,p,b,ln,ans=0;
    vector<long long>vec,temp;
    cin>>n>>m;
    limit=powl(2,n);
    for(int i=0; i<limit; i++)
    {
        cin>>in;
        vec.push_back(in);
    }
    for(int i=0;i<limit;i++)
    {

    }
    for(int i=0; i<m; i++)
    {
        cin>>p>>b;
        vec[p-1]=b;
        ans=0;
        //temp=vec;
        ln=limit;
        while(ln>=1)
        {
            for(int j=0; j<ln-1; j+=2)
            {
                ans^=(vec[j]|vec[j+1]);
            }
            ln-=3;
        }
        cout<<ans<<endl;
    }
    return 0;
}
