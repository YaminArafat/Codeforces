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
int n, m;
int mat[55][55];
bool chk(int nnx, int nny)
{
    if (nnx >= 0 && nnx < n && nny >= 0 && nny < m)
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
        cin >> n >> m;
        for0(i, n, 1)
        {
            for0(j, m, 1)
            {
                cin >> mat[i][j];
            }
        }
        int cnt, maxx, chki, chkj, step = 0, a = 0, v = 0, avb = 0, row = 0, col = 0;
        ;
        // while (1)
        {
            maxx = 0;
            chki = -1;
            chkj = -1;
            for0(i, n, 1)
            {
                cnt = 0;
                for0(j, m, 1)
                {
                    if (mat[i][j])
                        continue;
                    // cnt = 0, avb = 0;
                    // for0(k, 4, 1)
                    // {
                    //     int nx = i + dx[k];
                    //     int ny = j + dy[k];
                    //     if (chk(nx, ny))
                    //     {
                    //         cnt++;
                    //         if (!mat[nx][ny])
                    //             avb++;
                    //     }
                    // }
                    // if (avb == cnt && cnt > maxx)
                    // {
                    //     maxx = cnt;
                    //     chki = i;
                    //     chkj = j;
                    // }
                    // if (avb == 4)
                    //     break;
                    cnt++;
                }
                if (cnt == m)
                    row++;
            }
            for0(j, m, 1)
            {
                cnt = 0;
                for0(i, n, 1)
                {
                    if (mat[i][j])
                        continue;
                    cnt++;
                }
                if (cnt == n)
                    col++;
            }
            // if (chki != -1 && chkj != -1)
            // {
            //     mat[chki][chkj] = 1;
            //     // for0(k, 4, 1)
            //     // {
            //     //     int nx = chki + dx[k];
            //     //     int ny = chkj + dy[k];
            //     //     if (chk(nx, ny))
            //     //     {
            //     //         mat[nx][ny] = 1;
            //     //     }
            //     // }
            //     step++;
            //     if (step % 2)
            //         a++;
            //     else
            //         v++;
            // }
            // else
            // {
            //     if (a > v)
            //         cout << "Ashish" << endl;
            //     else
            //         cout << "Vivek" << endl;
            //     break;
            // }
            if (min(col, row) % 2)
            {
                cout << "Ashish" << endl;
            }
            else
                cout << "Vivek" << endl;
            // for0(i, n, 1)
            // {
            //     for0(j, m, 1)
            //     {
            //         cout << mat[i][j] << " ";
            //     }
            //     cout << endl;
            // }
        }
    }
    return 0;
}