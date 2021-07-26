#include <bits/stdc++.h>
using namespace std;
bool st[100000];
int main()
{
    int k,l,m,n,d,count=0,i;
    cin>>k>>l>>m>>n>>d;
    if(k==1||l==1||m==1||n==1)
    {
        cout<<d<<endl;
    }
    else
    {
        for(i=k;i<=d;i+=k)
        {
            st[i]=1;
        }
        for(i=l;i<=d;i+=l)
        {
            if(st[i]==0)
            {
                st[i]=1;
            }
        }
        for(i=m;i<=d;i+=m)
        {
            if(st[i]==0)
            {
                st[i]=1;
            }
        }
        for(i=n;i<=d;i+=n)
        {
            if(st[i]==0)
            {
                st[i]=1;
            }
        }
        for(i=1;i<=d;i++)
        {
            if(st[i]==1)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
