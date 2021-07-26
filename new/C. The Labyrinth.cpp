#include <bits/stdc++.h>
#define maX 1005
using namespace std;
string arr[maX];
//bool vis[maX][maX];
bool ind[maX][maX];
int dx[]= {+1,-1,+0,+0};
int dy[]= {+0,+0,+1,-1};
bool isValid(int tx,int ty,int n,int m)
{
    if(tx>=0 && tx<n and ty>=0 && ty<m && arr[tx][ty]=='.' && !ind[tx][ty])
    {
        return true;
    }
    return false;
}
void dfs(int n,int m)
{
    pair<int,int>p;
    queue<pair<int,int> >q;
    int count;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]=='.')
            {
                //ind[i][j]=0;
                continue;
            }
            //vis[i][j]=1;
            q.push(make_pair(i,j));
            count=1;
            while(!q.empty())
            {
                p=q.front();
                //cout<<p.first<<" "<<p.second<<endl;
                q.pop();
                for(int k=0; k<4; k++)
                {
                    int x=p.first;
                    int y=p.second;
                    int tx=x+dx[k];
                    int ty=y+dy[k];
                    if(isValid(tx,ty,n,m))
                    {
                        count++;
                        q.push(make_pair(tx,ty));
                        //cout<<tx<<" "<<ty<<endl;
                        ind[tx][ty]=1;
                        //q.push(ty);
                    }

                }
                //}
            }
            arr[i][j]=(count%10)+'0';
            memset(ind,0,sizeof(ind));
        }
    }
    for(int i=0; i<n; i++)
    {
        /*for(int j=0; j<m; j++)
        {
            if(arr[i][j]=='.')
                printf("%c",arr[i][j]);
            else
                printf("%d",arr[i][j]);
        }*/
        cout<<arr[i]<<endl;
        //printf("\n");
    }
}
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    for(i=0; i<n; i++)
    {
        //scanf("%s",arr[i]);
        cin>>arr[i];
    }
    //cout<<arr[1][0];
    /*for(i=0; i<n; ++i)
    {
        for(j=0; j<m; ++j)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }*/
    dfs(n,m);
    return 0;
}
