#include<bits/stdc++.h>
using namespace std;
int bfs(int src,vector<int>adj[])
{
    bool visi[110]= {0};
    int lvl[110]= {0};
    queue<int>q;
    q.push(src);
    int mx=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        visi[u]=1;
        for(int i=0; i<adj[u].size(); i++)
        {
            if(!visi[adj[u][i]])
            {
                lvl[adj[u][i]]=lvl[u]+1;
                visi[adj[u][i]]=1;
                q.push(adj[u][i]);
                mx=max(lvl[adj[u][i]],mx);
            }
        }
    }
    return mx;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int spider,node,u,v,mx=0,sum=0;
    cin>>spider;
    while(spider--)
    {
        cin>>node;
        vector<int>adj[node+5];
        mx=0;
        for(int i=0; i<node-1; i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=1; i<=node; i++)
        {
            mx=max(mx,bfs(i,adj));
        }
        sum+=mx;
    }
    cout<<sum<<endl;
    return 0;
}
