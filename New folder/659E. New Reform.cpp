#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,m,x,y,cnt=0;
    cin>>n>>m;
    //vector<ll>adj[n+5];
    map<ll,ll>vis;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        //adj[x].push_back(y);
        if(!vis[x] && !vis[y])
        {
            vis[x]=1;
            cnt++;
        }
        else if(!vis[x])
        {
            vis[x]=1;
            cnt++;
        }
        else if(!vis[y])
        {
            vis[y]=1;
            cnt++;
        }
    }
    cout<<n-cnt<<endl;
    return 0;
}
