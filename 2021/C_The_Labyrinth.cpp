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
int n, m, cnt, num;
string grid[1005], ans[1005];
int conComp[1005][1005],parent[1000005],track[1005][1005],money[1000005];
bool vis[1005][1005], vis2[1005][1005];
int dx[] = {+1, -1, 0, 0};
int dy[] = {0, 0, +1, -1};
int ddx[] = {+1, +1, -1, -1};
int ddy[] = {+1, -1, +1, -1};
bool isValid(int chkX, int chkY)
{
    if (chkX >= 0 && chkX < n && chkY >= 0 && chkY < m && grid[chkX][chkY] == '.')
        return true;
    return false;
}
int DFS(int x, int y)
{
    vis[x][y] = true;
    //int f=0;
    //cout<<"outside";
    //see3(x,y,cnt);
    //see(f);
    for0(i, 4, 1)
    {
        int nwX = x + dx[i];
        int nwY = y + dy[i];
        if (isValid(nwX, nwY) && !vis[nwX][nwY])
        {
            //cout<<"inside";
            //see3(nwX,nwY,cnt);
            //see(f);
            cnt += (DFS(nwX, nwY));
            //f=1;
        }
    }
    //cout<<"return";
    //see3(x,y,cnt);
    //see(f);
    //if(!f)
    return 1;
    //else
    //return 0;
}
void DFS2(int x, int y)
{
    for0(i, 4, 1)
    {
        int nwX = x + dx[i];
        int nwY = y + dy[i];
        if (isValid(nwX, nwY) && !vis2[nwX][nwY])
        {
            vis2[nwX][nwY] = true;

            DFS2(nwX, nwY);
        }
    }
}
int findParent(int c)
{
    if(parent[c]==c)
        return c;
    return parent[c]=findParent(parent[c]);
}
int makeSet(int x, int y)
{
    int u=findParent(x);
    int v=findParent(y);
    if(u!=v)
    {
        parent[v]=u;
    }
}
int main()
{
    fio;
#ifndef ONLINE_JUDGE
    rw;
#endif
    cin >> n >> m;
    for0(i, n, 1)
    {
        cin >> grid[i];
    }
    num=1;
    for0(i,n*m,1)
    {
        parent[i]=i;
    }
    for0(i,n,1)
    {
        for0(j,m,1)
        {
            if(grid[i][j]=='*')
                continue;
            for0(k,4,1)
            {
                int nwX=i+dx[k];
                int nwY=j+dy[k];
                if(isValid(nwX,nwY))
                {
                    makeSet(i*m+j,nwX*m+nwY);
                }
            }

        }
    }

    // for0(i,n*m,1)
    // {
    //     cout<<i<<" "<<parent[i]<<endl;
    // }

    //also ac// // for0(i, n, 1)
    // // {
    // //     for0(j, m, 1)
    // //     {
    // //         if (grid[i][j] == '*')
    // //         {
    // //             int sum=1;
    // //             map<int,int>mp;
    // //             for0(k,4,1)
    // //             {
    // //                 int nwX = i + dx[k];
    // //                 int nwY = j + dy[k];
    // //                 int tmpP=findParent(nwX*m+nwY);
    // //                 if (isValid(nwX, nwY))
    // //                 {
    // //                     if (!money[tmpP])
    // //                     {
    // //                         cnt = 1;
    // //                         DFS(nwX, nwY);
    // //                         money[tmpP] = cnt;                         
    // //                         //see3(tmpP,money[tmpP],cnt);
    // //                         //cout<<cnt<<endl;
    // //                         //sum += cnt;
    // //                         //clr(vis, 0);
    // //                     }
    // //                     if(!mp[tmpP])
    // //                     {
    // //                         mp[tmpP] = 1;
    // //                         sum+=money[tmpP];
    // //                         //see3(tmpP,money[tmpP],sum);
    // //                     }
    // //                 }
    // //             }
    // //             //see(sum);
    // //             sum%=10;
    // //             ans[i]+=sum+'0';
    // //         }
    // //         else
    // //             ans[i]+='.';
    // //     }
    // // }

    // for0(i, n, 1)
    // {
    //     for0(j, m, 1)
    //     {
    //         if (grid[i][j] == '*')
    //         {
    //             cnt = 1;
    //             grid[i][j] = '.';
    //             //see2(cnt,grid[i][j]);
    //             DFS(i, j);
    //             //cout<<cnt<<" ";
    //             ans[i] += (cnt % 10) + '0';
    //             grid[i][j] = '*';
    //             //see2(cnt,grid[i][j]);
    //             clr(vis, 0);
    //         }
    //         else
    //         {
    //             ans[i] += grid[i][j];
    //         }
    //     }
    //     //cout<<endl;
    // }
    // //cout<<endl;

    for0(i, n, 1)
    {
        for0(j, m, 1)
        {
            if (grid[i][j] == '*')
                continue;
            // for0(k, 4, 1)
            // {
            //     int nwX = i + dx[k];
            //     int nwY = j + dy[k];
            //     int tmpP=findParent(nwX*m+nwY);
            //     if (isValid(nwX, nwY))
            //     {
            //         if (money[tmpP])
            //         {
            //             conComp[i][j] = money[tmpP];
            //             //track[i][j]=num;
            //             //num++;
            //             break;
            //         }
            //     }
            // }           
            int tmpP=findParent(i*m+j);
            if(money[tmpP])
            {
                conComp[i][j]=money[tmpP];
            }
            else if (!conComp[i][j] && !money[tmpP])
            {
                cnt = 1;
                DFS(i, j);
                //track[i][j]=num;
                //num++;
                //see3(i,j,cnt);
                conComp[i][j] = cnt;
                money[tmpP] = cnt;
                //clr(vis, 0);
            }
        }
    }

    for0(i,n,1)
    {
        for0(j,m,1)
        {
            if(grid[i][j]=='*')
            {
                map<int,int>mp;
                int sum = 1;
                for0(k,4,1)
                {
                    int nwX=i+dx[k];
                    int nwY=j+dy[k];
                    int tmpP=findParent(nwX*m+nwY);
                    if(isValid(nwX,nwY) && !mp[tmpP])
                    {
                        mp[tmpP] = 1;
                        sum+=money[tmpP];
                    }
                }
                sum%=10;
                ans[i]+=sum+'0';
            }
            else
                ans[i]+='.';
        }
    }

    // for0(i, n, 1)
    // {
    //     for0(j, m, 1)
    //     {
    //         if (grid[i][j] == '*')
    //         {
    //             int sum = 1;
    //             for0(k, 4, 1)
    //             {
    //                 int nwX = i + dx[k];
    //                 int nwY = j + dy[k];
    //                 if (isValid(nwX, nwY) && !vis2[nwX][nwY])
    //                 {
    //                     DFS2(nwX, nwY);
    //                     sum += conComp[nwX][nwY];
    //                 }
    //             }
    //             //see3(i,j,sum);
    //             //cout<<sum%10<<" ";
    //             ans[i] += (sum % 10) + '0';
    //             clr(vis2, 0);
    //         }
    //         else
    //             ans[i] += grid[i][j];
    //         //cout<<conComp[i][j]<<" ";
    //     }
    //     //cout<<endl;
    // }
    for0(i, n, 1)
    {
        cout << ans[i] << endl;
    }
    return 0;
}