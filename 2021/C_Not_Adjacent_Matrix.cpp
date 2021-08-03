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
int dx[] = {+1, -1, 0, 0};
int dy[] = {0, 0, +1, -1};
bool vis2[105][105];
int n;
bool chk(int nnx, int nny)
{
    if (nnx >= 0 && nnx < n && nny >= 0 && nny < n && vis2[nnx][nny])
        return true;
    return false;
}
int main()
{
    fio;
#ifndef ONLINE_JUDGE
    rw;
#endif
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 2)
        {
            cout << "-1" << endl;
            continue;
        }
        int mat[n + 5][n + 5], k = 0;
        clr(mat, 0);
        // bool vis[n + 5];
        // clr(vis, false);
        for0(i, n, 1)
        {
            for0(j, n, 1)
            {
                // vis2[i][j] = true;
                // for0(k, 4, 1)
                // {
                //     int nx = j + dx[k];
                //     int ny = i + dy[k];
                //     if (chk(nx, ny))
                //     {
                //     }
                //     else
                //     {
                //     }
                // }
                if ((i + j) % 2 == 0)
                {
                    mat[i][j] = ++k;
                }
            }
        }
        for0(i, n, 1)
        {
            for0(j, n, 1)
            {
                if (!mat[i][j])
                    cout << ++k << " ";
                else
                    cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}