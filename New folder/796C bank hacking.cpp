#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>strnth;
vector<ll>adj[300005];
bool vis[300005];
ll cnt[300005];
ll bfs(ll src,ll mxx)
{
    queue<ll>q;
    ll ans2=mxx;
    q.push(src);
    while(!q.empty())
    {
        ll p=q.front();
        q.pop();
        vis[p]=1;
        for(ll i=0; i<adj[p].size(); i++)
        {
            if(vis[adj[p][i]])
                continue;
            for(int j=0; j<adj[adj[p][i]].size(); j++)
            {
                if(strnth[adj[adj[p][i]][j]]==mxx)
                {
                    ans2++;
                    break;
                }
            }
            //strnth[adj[p][i]]++;
            q.push(adj[p][i]);
        }
    }
    //vector<ll>::iterator pos;
    //pos=max_element(strnth.begin(),strnth.end());
    //return *pos;
    return ans2;
}
int main()
{
    ll n,x,u,v,mx=LONG_LONG_MIN,tmp;
    cin>>n;
    strnth.push_back(0);
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        if(x>mx)
        {
            mx=x;
        }
        strnth.push_back(x);
    }
    for(ll i=0; i<n-1; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        cnt[u]++;
        cnt[v]++;
        if(cnt[u]>1 && strnth[u]==mx)
        tmp=u;
        else if(cnt[v]>1 && strnth[v]==mx)
        tmp=v;

    }
    //cout<<tmp<<endl;
    cout<<bfs(tmp,mx)<<endl;
}
