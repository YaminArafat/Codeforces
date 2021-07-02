#include <bits/stdc++.h>
using namespace std;
bool valid(int tx,int ty,int n,int m)
{
    if(tx>=0 && tx<n && ty>=0 && ty<m)
        return true;
    return false;
}
int dx[]= {+0,+0,+1,-1,-1,+1,-1,+1};
int dy[]= {-1,+1,+0,+0,+1,+1,-1,-1};
int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    char str[101][101];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>str[i][j];
            //if(str[i][j])
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(str[i][j]-'0'>=1 && str[i][j]-'0'<=8)
            {
                int cont=0;
                for(int k=0; k<8; k++)
                {
                    int tx=i+dx[k];
                    int ty=j+dy[k];
                    if(valid(tx,ty,n,m))
                    {
                        if(str[tx][ty]=='*')
                        {
                            cont++;
                        }
                    }
                }
                if(str[i][j]-'0'!=cont)
                {
                    //ans++;
                    cout<<"NO"<<endl;
                    return 0;
                }
                /*else
                {
                    cout<<"NO"<<endl;
                    return 0;
                }*/
            }
            else if(str[i][j]=='.')
            {
                int cont=0,neigh=0;
                for(int k=0; k<8; k++)
                {
                    int tx=i+dx[k];
                    int ty=j+dy[k];
                    if(valid(tx,ty,n,m))
                    {
                        if(str[tx][ty]!='*')
                        {
                            cont++;
                        }
                        neigh++;
                    }
                }
                if(neigh!=cont)
                {
                    //ans++;
                    cout<<"NO"<<endl;
                    return 0;
                }
                /*else
                {
                    cout<<"NO"<<endl;
                    return 0;
                }*/
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
