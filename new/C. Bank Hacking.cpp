#include <bits/stdc++.h>
#define maxx 3000005
using namespace  std;
vector<int>arr;
bool vis[maxx];
bool flag[maxx];
bool flag2[maxx];
int lvl[maxx];
vector<int>adj_lst[maxx];
vector<int>cost[maxx];
int f;
int increament(int x)
{
    return x+1;
}
void bfs(int x,int pos1,int pos2,int n)
{
    //cout<<x<<" "<<pos1<<" "<<pos2<<" "<<n<<endl;
    queue<int>q;
    q.push(x);
    //vis[x]=1;
    lvl[x]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<adj_lst[u].size(); i++)
        {
            if(adj_lst[u][i]==u)
            {
                continue;
            }
            lvl[adj_lst[u][i]]=lvl[u]+1;
            q.push(adj_lst[u][i]);
        }
    }
    int dif=abs(lvl[pos1+1]-lvl[pos2+1]);
    //cout<<arr[pos1]<<endl;
    int temp=arr[pos1]+(f==1?dif:0);
    //cout<<temp<<endl;
    //cout<<x<<endl;
    q.push(x);
    vis[arr[pos1]]=1;
    int t=0;
    while(!q.empty())
    {
        int u=q.front();
        cout<<u<<" "<<adj_lst[u].size()<<endl;
        q.pop();
        for(int i=0; i<adj_lst[u].size(); i++)
        {
            /*if(adj_lst[u][i]!=u)
            {
                continue;
            }*/
            //cout<<arr[adj_lst[u][i]-1]<<endl;
            cout<<adj_lst[u][i]<<endl;
            if(adj_lst[u][i]!=u)
            {
                q.push(adj_lst[u][i]);

            }
            else if(!vis[adj_lst[u][i]] && temp>=arr[adj_lst[u][i]-1-t])
            {
                //if(adj_lst[u][i]==u)
                {
                    vis[adj_lst[u][i]]=1;
                    t++;
                    int w=adj_lst[u][i]-1-t;
                    //cout<<arr[adj_lst[u][i]-1]<<endl;
                    arr.erase(arr.begin()+w);
                    //cout<<arr.size()<<endl;
                    //remove_copy(arr,arr+n,arr,adj_lst[u][i]);
                    transform(arr.begin(),arr.end(),arr.begin(),increament);
                    //break;
                    //for(int j=0;j<n;j++)cout<<arr[j]<<" ";
                    //cout<<endl;
                    //break;
                }
            }
            else if (!vis[adj_lst[u][i]] && temp<arr[adj_lst[u][i]-1-t])
            {
                temp+=(arr[adj_lst[u][i]-1-t]-temp);
                cout<<"hello"<<endl;
                i-=1;
            }
        }
    }
    printf("%d\n",temp);
}
int main()
{
    int n,i,j,mx=-1000000005,pos1,pos2=0,count=0,tmp,x=1,s;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&tmp);
        if(tmp>mx)
        {
            mx=tmp;
            pos1=i;
            count=0;
        }
        else if(tmp==mx)
        {
            pos2=i;
            f=1;
            count++;
        }
        arr.push_back(tmp);
    }

    for(i=1; i<=n-1; i++)
    {
        int n1,n2;
        scanf("%d %d",&n1,&n2);
        //
        //adj_lst[n2].push_back(n2);
        adj_lst[n1].push_back(n2);
        //adj_lst[n2].push_back(n1);
        //adj_lst[n1].push_back(n1);
        if(x)
        {
            s=n1;
            x=0;
        }
        if(!flag2[n1])
        {
            adj_lst[n1].push_back(n1);
            flag2[n1]=1;
        }
        if(!flag2[n2])
        {
            //adj_lst[n1].push_back(n2);
            adj_lst[n2].push_back(n2);
            flag2[n2]=1;
        }
    }
    /*for(i=0;i<adj_lst[3].size();i++)
        cout<<adj_lst[3][i]<<" ";*/
    bfs(1,pos1,pos2,n);
    return 0;
}
