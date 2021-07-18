#include <bits/stdc++.h>
using namespace std;
bool visited[1100]= {false};
int parent[1100]= {-1};
int n,m,x,sum,dst,e;
int arr[510][510],loc[510][510];
//set<set<pair<int,int> > >s;
set<pair<int,int> >tmp;
//pair<int,int> p;
//vector<vector<pair<int,int> > >vec;
vector<set<pair<int,int> > >vec;
vector<pair<int,int> > tmpvec;
//vector<vector<pair<int,int> > >adj(1100);
vector<set<pair<int,int> > >adj[1100];
/*int dfs(int s,int row)
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
}*/
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
        vec.push_back(tmp);
        //s.insert(tmp);
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
    //set<set<pair<int,int> > >::iterator row;
    //set<pair<int,int> >::iterator col;
    set<pair<int,int> >::iterator it,pt;
    for(int i=0; i<vec.size()-1; i++)
    {
        for(it=vec[i].begin(); it!=vec[i].end(); ++it)
        {
            cout<<(*it).first<<" "<<(*it).second<<endl;
            for(pt=vec[i+1].begin(); pt!=vec[i+1].end(); ++pt)
            {
                if((*it).second!=(*pt).second)
                {
                    tmp.insert(make_pair((*pt).second,(*pt).first));
                }
            }
            adj[(*it).second].push_back(tmp);
            tmp.clear();
        }
    }
    cout<<"SET"<<endl;
    /*for(row=s.begin(); row!=s.end(); ++row)
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
    s.clear();*/
    //cout<<"vector "<<vec.size()<<" "<<vec[0].size()<<" "<<vec[1].size()<<endl;
    /*for(int i=0; i<vec.size()-1; i++)
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
    }*/
    //cout<<vec[0][0].first<<" "<<vec[0][0].second<<endl;
    /*cout<<"ADJ LIST"<<endl;
    for(int i=0; i<adj.size(); i++)
    {
        for(it=adj[i].begin(); it!=adj[i].end(); ++it)
        {
            cout<<(*it).first<<" "<<(*it).second<<endl;
        }
    }*/
    /*for(int i=0; i<adj.size(); i++)
    {
        cout<<i<<endl;;
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j].first<<" "<<adj[i][j].second<<endl;
        }
    }*/
    //cout<<"TEST"<<endl;

    for(int k=0; k<vec.size(); k++)
    {
        //cout<<vec[0][k].first<<" "<<vec[0][k].second<<endl;
        visited[vec[k].first]=true;
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
    /*    memset(visited,false,sizeof(visited));
    }*/
    printf("NIE\n");
    vec.clear();
//    adj.clear();
    return 0;
}
















/*if(dfs(vec[0][k].first,vec[0][k].second))
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }*/
/*void bfs(int s,int row)
{
    queue<pair<int,int> >q;
    q.push(make_pair(s,row));
    while(!q.empty())
    {
        pair<int,int>top=q.front();
        q.pop();
        cout<<"poped"<<top.first<<" "<<top.second<<endl;
        bool chk=false;
        for(int i=0; i<adj[top.first].size(); i++)
        {
            if(!visited[adj[top.first][i].first] && adj[top.first][i].second-top.second==1)
            {
                parent[adj[top.first][i].first]=top.first;
                visited[adj[top.first][i].first]=true;
                chk=true;
                cout<<top.first<<" "<<adj[top.first][i].first<<" "<<adj[top.first][i].second<<endl;
                q.push(make_pair(adj[top.first][i].first,adj[top.first][i].second));
            }
        }
        if(!chk)
        {
            visited[top.first]=false;
            parent[top.first]=-1;
        }
    }
}*/





















/*for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(!flag[i+1][arr[i][j]])
            {
                cnt++;
            }

        }
    }*/
//set< set<int> >::iterator row;
/*for(row=s.begin(); row!=s.end(); ++row)
        {
            for (col = (*row).begin(); col != (*row).end(); ++col)
            {
                //tmpvec.push_back(*col);
                cout<<(*col).first<<" "<<(*col).second<<endl;
            }
            //vec.push_back(tmpvec);
        }*/

/*set<set<pair<int,int> > >::iterator row;
    set<pair<int,int> >::iterator col;
    for(it=s.begin(); it!=s.end(); ++it)
    {
        cout<<(it)->first<<" "<<(it)->second<<endl;
        vec[it->second].push_back(make_pair(it->first,it->second));
    }*/
/*list< pair<int, int> >::iterator itr = adj[i].begin();

        while (itr != adj[i].end()) {
            cout<<(*itr).first<<" "<<(*itr).second<<endl;

            ++itr;
        }*/




/*

vector<vector<int> >vec;
    vector<int>tmpvec;
    set<set<int> >s;
    set<int>tmp;
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
            tmp.insert(arr[i][j]);
            s.insert(tmp);
            mp[arr[i][j]]=j+1;
        }
    }
    set< set<int> >::iterator row;
    set<int>::iterator col;
    for(row=s.begin(); row!=s.end(); ++row)
    {
        for (col = row->begin(); col != row->end(); col++)
        {
            tmpvec.push_back(*col);
        }
        vec.push_back(tmpvec);
    }
    for(int i=0;i<)

*/
