#include <bits/stdc++.h>
using namespace std;
bool mp[1000006];
int main()
{
    int n,m,k,u,v,init=1,ans=-5,x;
    scanf("%d %d %d",&n,&m,&k);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&x);
        mp[x]=1;
    }
    for(int i=0;i<k;i++)
    {
        scanf("%d %d",&u,&v);
        if(u==init)
        {
            if(!mp[u])
                init=v;
            else
                ans=u;
        }
        else if(v == init)
        {
            if(!mp[v])
                init=u;
            else
                ans=v;
        }
    }
    if(ans<0)
        ans=init;
    printf("%d\n",ans);
}
