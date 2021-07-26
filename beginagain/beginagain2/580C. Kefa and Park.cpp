#include <bits/stdc++.h>
#define ll long long
#define MAX 100005
using namespace std;
bool vis[MAX];
ll arr[MAX],parent[MAX],cat[MAX];
vector<ll>adj[MAX];
vector<pair<ll,ll> >vec;
ll n,m,ans,x,y,src;
ll dfs(ll src,ll cnt)
{
    vis[src]=true;
    //cout<<src<<" "<<cnt<<endl;
    if(arr[src])
        cnt++;
    else
        cnt=0;
    if(cnt>m)
        return 0;
    //cout<<src<<" "<<cnt<<endl;
    ll sizee=adj[src].size();
    ll value;
    if(sizee==1 && vis[adj[src][0]])
    {
        return ans++;
    }
    for(ll i=0; i<sizee ; i++)
    {
        value=adj[src][i];
        if(!vis[value])
        {
            //cout<<"calling "<<value<<" "<<cnt<<endl;
            dfs(value,cnt);
        }
    }
    //cout<<"bfr chk "<<cnt<<" "<<ans<<endl;
    //if(sizee==1)
        //ans++;
    //cout<<"aftr chk "<<cnt<<" "<<ans<<endl;
    return ans;
}
int main()
{
    cin>>n>>m;
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i+1];
    }
    for(ll i=0; i<n-1; i++)
    {
        cin>>x>>y;
        //if(x>y)
        //swap(x,y);
        //vec.push_back(make_pair(x,y));
        //if(!vis[x])
        adj[x].push_back(y);
        adj[y].push_back(x);
        //parent[y]=x;
        //if(!i)
            //src=x;
    }
    /*sort(vec.begin(),vec.end());
    for(ll i=0; i<n-1; i++)
    {
        x=vec[i].first;
        y=vec[i].second;
        if(!vis[x] && !vis[y])
        {
            adj[x].push_back(y);
            parent[y]=x;
            vis[x]=true;
            vis[y]=true;
        }
        else if(!vis[y])
        {
            adj[x].push_back(y);
            parent[y]=x;
            vis[y]=true;
        }
        else if(!vis[x])
        {
            adj[y].push_back(x);
            parent[x]=y;
            vis[x]=true;
        }
        else
        {
            adj[y].push_back(x);
            parent[x]=y;
        }
    }
    memset(vis,0,sizeof(vis));*/
    /*adj[0].push_back(1);
    parent[1]=0;
    for(ll i=1; i<=n; i++)
    {
        if(arr[i])
        {
            cat[i]+=cat[parent[i]]+arr[i];
        }
    }*/
    cout<<dfs(1,0)<<endl;
    return 0;
}
