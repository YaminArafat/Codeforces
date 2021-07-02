#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define for0(i, n, incr) for (int i = 0; i < (int)(n); i+=incr) 
#define for1(i, n, incr) for (int i = 1; i <= (int)(n); i+=incr) 
#define forc(i, l, r, incr) for (int i = (int)(l); i <= (int)(r); i+=incr) 
#define forcr(i, r, l, decr) for (int i = (int)(r); i >= (int)(l); i-=decr)
#define forr0(i, n, decr) for (int i = (int)(n) - 1; i >= 0; i-=decr)
#define forr1(i, n, decr) for (int i = (int)(n); i >= 1; i-=decr) 
#define see(x) cout<<"\n"<<#x<<" = "<<(x)<<"\n";
#define see2(x,y) cout<<"\n"<<#x<<" = "<<(x)<<" "<<#y<<" = "<<(y)<<'\n'
#define see3(x,y,z) cout<<"\n"<<#x<<" = "<<(x)<<" "<<#y<<" = "<<(y)<<" "<<#z<<" = "<<(z)<<'\n'
#define clr(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
#define fio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define rw freopen("input.txt","r",stdin);freopen("output.txt","w",stdout); 
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
vl tmp;
vpl strngth;
vl adj[300005];
bool vis[300005];
bool visb[300005];
ll lvl[300005];
ll mx2=LONG_LONG_MIN;
bool sortbydes(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.ff > b.ff);
}
// ll DFS(ll src, ll mx)
// {
//     vis[src]=true;
//     //see(src);
//     for0(i,adj[src].size(),1)
//     {
//         if(vis[adj[src][i]])
//             continue;
        
//         if(strngth[adj[src][i]-1]==mx)
//              mx++;
//         see3(src, adj[src][i], mx);
//         mx=DFS(adj[src][i],mx);
//     }
//     see2(src, mx);
//     return mx;
// }
void BFS1(ll src)
{
    queue<ll>q;
    q.push(src);
    ll f;
    while(!q.empty())
    {
        f=q.front();
        q.pop();
        vis[f]=true;
        for0(i,adj[f].size(),1)
        {
            if(vis[adj[f][i]])
                continue;
            lvl[adj[f][i]]=lvl[f]+1;
            q.push(adj[f][i]);
        }
    }
}
ll BFS2(ll src)
{
    queue<ll>q;
    q.push(src);
    ll f;
    while(!q.empty())
    {
        f=q.front();
        q.pop();
        visb[f]=true;
        for0(i,adj[f].size(),1)
        {
            if(visb[adj[f][i]])
                continue;
            if(lvl[adj[f][i]]-lvl[f]<=2)
                tmp[adj[f][i]]++;
            mx2=max(mx2,tmp[adj[f][i]]);
            see3(mx2,adj[f][i],tmp[adj[f][i]]);
            q.push(adj[f][i]);
        }
    }
    see2(mx2,src);
    return mx2;
}
int main()
{
    fio;
    // #ifndef ONLINE_JUDGE 
    //     rw;
    // #endif
    ll n,u,v,x,ans=LONG_LONG_MIN,pos=0;
    cin>>n;
    for0(i,n,1)
    {
        cin>>x;
        // if(x>mx)
        // {
        //     mx=x;
        //     pos=i+1;
        // }
        tmp.pb(x);
        strngth.pb(mk(x,i+1));
    }
    //ans=mx;
    for0(i,n-1,1)
    {
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    // for0(i,n,1)
    // {
    //     see2(strngth[i].ff,strngth[i].ss);
    // }
    sort(all(strngth), sortbydes);
    // for0(i,n,1)
    // {
    //     see2(strngth[i].ff,strngth[i].ss);
    // }
    for0(i,n,1)
    {
        if(!visb[strngth[i].ss])
        {
            BFS1(strngth[i].ss);
            // for0(j, n, 1)
            // {
            //     see2(j+1, lvl[j+1]);
            // }
            clr(vis,0);
            ans=max(ans, BFS2(strngth[i].ss));
            clr(lvl,0);
            mx2=LONG_LONG_MIN;
        }
    }
    //see(ans);
    // BFS1(pos);
    // for0(i,n,1)
    // {
    //     if(!visb[i+1])
    //     {
    //         mx2=max(mx2,BFS(i+1));
    //     }
    // }
    // mx2=BFS2(pos);
    // for0(i,n,1)
    // {
    //     if(!visb[i+1])
    //     {
    //         mx2=max(mx2,BFS(i+1));
    //     }
    // }
    // ans=DFS(pos,mx);
    // for0(i,n,1)
    // {
    //     if(!vis[i+1])
    //     {
    //         ans=DFS(i+1, ans);
    //     }
    // }
    //see(ans);
    cout<<ans<<endl;
    return 0;
}