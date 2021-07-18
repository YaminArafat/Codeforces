#include <bits/stdc++.h>
using namespace std;
bool visited[1100]= {false};
int parent[1100]= {-1};
int n,m,x,sum,dst,e;
int arr[510][510],loc[510][510];
set<set<pair<int,int> > >s;
set<pair<int,int> >tmp;
//pair<int,int> p;
vector<vector<pair<int,int> > >vec;
vector<pair<int,int> > tmpvec;
vector<vector<pair<int,int> > >adj(1100);
int dfs(int s,int row)
{
    //3cout<<"in "<<s<<" "<<row<<endl;
    bool chk=false;
    if(row==n)
    {
        dst=s;
        return 1;
    }
    for(int i = 0; i < adj[s].size(); i++)
    {
        if(!visited[adj[s][i].first] && adj[s][i].second-row==1)
        {
            //cout<<s<<" "<<adj[s][i].first<<" "<<adj[s][i].second<<endl;
            chk=true;
            x=dfs(adj[s][i].first,adj[s][i].second);
            if(x)
            {
                parent[adj[s][i].first]=s;
                visited[adj[s][i].first]=true;
                sum+=x;
            }
        }
    }
    if(!chk)
    {
        return 0;
    }
    else
        return 1;
}
int find_path(int s,int dst)
{
    if(dst==s)
    {
        printf("%d",loc[e][s]);
        // cout<<loc[e][s];//<<" "<<e<<" "<<s<<endl;
        e++;
        return 0;
    }
    find_path(s,parent[dst]);
    //cout<<" "<<loc[e][dst];//<<" "<<e<<" "<<dst<<endl;
    printf(" %d",loc[e][dst]);
    e++;
}
int main()
{
    scanf("%d %d",&n,&m);
    e=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j])
            {
                loc[i+1][arr[i][j]]=j+1;
                tmp.insert(make_pair(i+1,arr[i][j]));
            }
        }
        s.insert(tmp);
        tmp.clear();
    }
    tmp.clear();
    /*cout<<"LOC"<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=20; j++)
        {
            if(loc[i][j])
            cout<<i<<" "<<j<<" "<<loc[i][j]<<"       ";
        }
        cout<<endl;
    }*/
    set<set<pair<int,int> > >::iterator row;
    set<pair<int,int> >::iterator col;
    //cout<<"SET"<<endl;
    for(row=s.begin(); row!=s.end(); ++row)
    {
        for (col = (*row).begin(); col != (*row).end(); ++col)
        {
            //tmpvec.push_back(*col);
            //cout<<(*col).first<<" "<<(*col).second<<endl;
            tmpvec.push_back(make_pair((*col).second,(*col).first));
        }
        vec.push_back(tmpvec);
        tmpvec.clear();
    }
    tmpvec.clear();
    s.clear();
    //cout<<"vector "<<vec.size()<<" "<<vec[0].size()<<" "<<vec[1].size()<<endl;
    for(int i=0; i<vec.size()-1; i++)
    {
        //cout<<i<<endl;
        for(int j=0; j<vec[i].size(); j++)
        {
            for(int k=0; k<vec[i+1].size(); k++)
            {
                if(vec[i][j].first!=vec[i+1][k].first)
                {
                    adj[vec[i][j].first].push_back(vec[i+1][k]);
                    //cout<<"vitore "<<vec[i][j].first<<" "<<vec[i+1][k].first<<"         "<<endl;
                }
                //cout<<"vitore "<<vec[i][j].first<<" "<<vec[i+1][k].first<<" "<<vec[i+1][k].second<<"         "<<endl;

            }
            //cout<<vec[i][j].first<<" "<<vec[i][j].second<<"       "<<endl;
        }
        //cout<<endl;
    }
    //cout<<vec[0][0].first<<" "<<vec[0][0].second<<endl;
    /*cout<<"ADJ LIST"<<endl;
    for(int i=0; i<adj.size(); i++)
    {
        cout<<i<<endl;;
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j].first<<" "<<adj[i][j].second<<endl;
        }
    }*/
    //cout<<"TEST"<<endl;

    for(int k=0; k<vec[0].size(); k++)
    {
        //cout<<vec[0][k].first<<" "<<vec[0][k].second<<endl;
        visited[vec[0][k].first]=true;
        x=1,sum=1;
        memset(parent,-1,sizeof(parent));
        dfs(vec[0][k].first,vec[0][k].second);
        e=1;
        //cout<<"ans "<<sum<<endl<<dst<<endl<<endl<<endl<<"PATH"<<endl<<endl;
        if(sum == n)
        {
            printf("TAK\n");
            find_path(vec[0][k].first,dst);
            //vec.clear();
            //adj.clear();
            return 0;
        }
        /*cout<<endl<<endl<<"Parent"<<endl<<endl<<endl;
        for(int i=0; i<10; i++)
        {
            cout<<i<<" "<<parent[i]<<endl;
        }
        cout<<"VISITED"<<endl;
        for(int i=0; i<10; i++)
        {
            cout<<i<<" "<<visited[i]<<endl;
        }*/
        memset(visited,false,sizeof(visited));
    }
    printf("NIE\n");
    vec.clear();
    adj.clear();
    return 0;
}
