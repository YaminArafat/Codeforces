#include <bits/stdc++.h>
using namespace std;
int fx[]= {1,-1,0,0};
int fy[]= {0,0,1,-1};
bool vis[60][60],vis2[60][60];
vector<string>vec;
int BFS(int r1,int c1,int r2,int c2,int n)
{
    if(r1==r2 && c1==c2 && r1==c1)
        return 0;
    vis[r1][c1]=1;
    vis2[r2][c2]=1;
    queue<pair<int,int> >q;
    vector<pair<int,int> >src;
    vector<pair<int,int> >des;
    pair<int,int>p,s;
    src.push_back(make_pair(r1,c1));
    q.push(make_pair(r1,c1));
    //int cnt=0;
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        for(int k=0; k<4; k++)
        {
            int dx=fx[k]+p.first;
            int dy=fy[k]+p.second;
            //cout<<dx<<" " <<dy<<endl;
            //cout<<++cnt<<endl;
            if(dx>=0 && dy>=0 && dx<n && dy<n && vec[dx][dy]=='0' && !vis[dx][dy])
            {

                //cout<<dx<<" " <<dy<<endl;
                src.push_back(make_pair(dx,dy));
                q.push(make_pair(dx,dy));
                vis[dx][dy]=1;
            }
        }
    }
    /*for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<vis[i][j]<<" ";
        }
        cout<<endl;
    }*/
    des.push_back(make_pair(r2,c2));
    q.push(make_pair(r2,c2));
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        for(int k=0; k<4; k++)
        {
            int dx=fx[k]+p.first;
            int dy=fy[k]+p.second;
            if(dx>=0 && dy>=0 && dx<n && dy<n && vec[dx][dy]=='0' && !vis2[dx][dy])
            {
                vis2[dx][dy]=1;
                des.push_back(make_pair(dx,dy));
                q.push(make_pair(dx,dy));
            }
        }
    }
    int cost=100000;
    /*cout<<endl;
    for(int i=0;i<src.size();i++)
    {
        cout<<src[i].first<<" "<<src[i].second<<endl;
    }
    cout<<endl;
    for(int i=0;i<des.size();i++)
    {
        cout<<des[i].first<<" "<<des[i].second<<endl;
    }*/
    for(int i=0;i<src.size();i++)
    {
        p=src[i];
        for(int j=0;j<des.size();j++)
        {
            s=des[j];
            cost=min(cost,(((p.first-s.first)*(p.first-s.first))+((p.second-s.second)*(p.second-s.second))));
        }
    }
    return cost;
}
int main()
{
    int n;
    cin>>n;
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        vec.push_back(s);
    }
    cout<<BFS(r1-1,c1-1,r2-1,c2-1,n)<<endl;
    /*for(int i=0; i<n; i++)
    {
        cout<<vec[i]<<endl;
    }*/
    return 0;
}







































































































/*#include <bits/stdc++.h>
#define val 100000
using namespace std;
int fx[]= {0,0,+1,-1};
int fy[]= {+1,-1,0,0};
bool vis[60][60];
int cost[60][60];
vector<string>vec;
int BFS(int r1,int c1,int r2,int c2,int n)
{
    if(r1==r2 && c1==c2 && r1==c1)
        return 0;
    vis[r2][c2]=1;
    queue<pair<int,int> >q;
    pair<int,int>p;
    p=make_pair(r2,c2);
    int mn=100000;
    mn=min(cost[r2][c2],mn);
    q.push(p);
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        for(int k=0; k<4; k++)
        {
            int dx=fx[k]+p.first;
            int dy=fy[k]+p.second;
            if(dx>=0 && dy>=0 && dx<n && dy<n && vec[dx][dy]=='0' && !vis[dx][dy])
            {
                mn=min(cost[dx][dy],mn);
                vis[dx][dy]=1;
                p=make_pair(dx,dy);
                q.push(p);
            }
        }
    }
    return mn;
}
int main()
{
    int n;
    cin>>n;
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        vec.push_back(s);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cost[i][j]=val;
        }
    }

        for(int j=r1-1; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                if((k+1<n && vec[j][k+1]!='0') || (vec[j][k]=='0' && k==n-1))
                {
                    for(int i=j;i<n;i++)
                    {
                        for(int d=0;d<n;d++)
                        {
                            if(vec[i][d]=='0' && (d==k&&i==j))
                            {
                                cout<<i<<" "<<d<<" "<<r1-1<<" "<<c1-1<<" "<<r2-1<<" "<<c2-1<<endl<<endl;
                                cost[i][d]=min(cost[i][d],(((j-i)*(j-i))+((k-d)*(k-d))));
                            }
                        }
                    }

                }
                /*if(vec[j][k]=='0' && (( k>0 && vec[j][k-1]!='0')||k==0))
                {
                    cout<<j<<" "<<k<<" "<<r1-1<<" "<<c1-1<<" "<<r2-1<<" "<<c2-1<<endl<<endl;
                    cost[j][k]=min(cost[j][k],(((r1-1-j)*(r1-1-j))+((c1-1-k)*(c1-1-k))));
                }
                else
                {
                    //cost[j][k]=cost[j][k-1];
                }
            }
        }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<cost[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<BFS(r1-1,c1-1,r2-1,c2-1,n)<<endl;
    return 0;
}*/
