#include <bits/stdc++.h>
#define maxx 100005
using namespace std;
vector<int>edge[maxx];
vector<int>parent[maxx];
int cat_pos[maxx];
bool vis[maxx];
int main()
{
    int n,m,count=0,ans=0,temp=0;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&cat_pos[i]);
    }
    for(int i=1; i<=n-1; i++)
    {
        int n1,n2;
        scanf("%d %d",&n1,&n2);
        edge[n1].push_back(n2);
        parent[n2].push_back(n1);
    }
    for(int i=2; i<=n; i++)
    {
        int tmp=parent[i][0];
        parent[i].push_back(i);
        while(tmp!=1)
        {
            parent[i].push_back(parent[tmp][0]);
            tmp=parent[tmp][0];
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(!cat_pos[i])
        {
            sort(parent[i].begin(),parent[i].end(),greater<int>());
            for(int j=0; j<parent[i].size(); j++)
            {
                if(cat_pos[parent[i][j]])
                {
                    count++;
                    if(count>m)
                    {
                        ans=temp;
                        break;
                    }
                }
                else
                {
                    if(!vis[parent[i][j]])
                    {
                        ans++;
                        if(edge[i].size()<m)
                        ans+=edge[i].size();
                    }
                    count=0;
                }
            }
            count=0;
            temp=ans;
            vis[i]=1;
        }
    }
    printf("%d\n",ans);
    return 0;
}
/*void bfs()
{
    int count=0;
    queue<int>q;
    q.push(1);
    vis[1]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<edge[u].size(); i++)
        {
            if(!vis[edge[u][i]] && !cat_pos[edge[u][i]])
            {
                vis[edge[u][i]]=1;
                q.push(edge[u][i]);
                count++;
            }
        }
    }
    printf("%d\n",count);
}*/
