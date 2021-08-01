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
int main()
{
    fio;
#ifndef ONLINE_JUDGE
    rw;
#endif
    ll t, m;
    cin >> t;
    while (t--)
    {
        cin >> m;
        ll maxx = LONG_LONG_MIN, pnt, ans = 0, minn = LONG_LONG_MAX;
        ll arr[3][m + 5];
        ll sum[3][m + 5];
        clr(sum, 0);
        for0(i, 2, 1)
        {
            for0(j, m, 1)
            {
                cin >> arr[i][j];
                if (!j)
                    sum[i][j] = arr[i][j];
                else
                    sum[i][j] += sum[i][j - 1] + arr[i][j];
            }
        }
        for0(j, m, 1)
        {
            if (!j)
            {
                if (sum[0][m - 1] - sum[0][j] < minn)
                    minn = sum[0][m - 1] - sum[0][j], pnt = j;
            }
            else
            {
                ll x = max(sum[0][m - 1] - sum[0][j], sum[1][j - 1]);
                if (x < minn)
                {
                    minn = x;
                    pnt = j;
                }
            }
        }
        if (!pnt)
            ans = sum[0][m - 1] - sum[0][0];
        else
            ans = max(sum[0][m - 1] - sum[0][pnt], sum[1][pnt - 1]);
        // for0(i, 2,1)
        // {
        //     for0(j,m,1)
        //     {
        //         cout<<sum[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // for0(j, m, 1)
        // {
        //     // cout<<sum[0][j]<<" "<<sum[1][m-1]<<" "<< (j==0) ? 0 : sum[1][j - 1];
        //     // cout<<endl;
        //     ll x ;
        //     if(!j)
        //     {
        //         x = LONG_LONG_MAX;
        //     }
        //     else
        //     {
        //         x = sum[1][j - 1];
        //     }
        //     minn = min(minn,min(x, sum[0][m-1]-sum[0][j]));
        //     // if (sum[0][j] + sum[1][m - 1] - x > maxx)
        //     // {
        //     //     // cout<<"vxv"<<endl;
        //     //     maxx = sum[0][j] + sum[1][m - 1] - x;
        //     //     pnt = j;
        //     //     see2(maxx, pnt);
        //     // }
        // }
        // ll x ;
        // if(!pnt)
        // {
        //     x = 0;
        // }
        // else
        // {
        //     x = sum[1][pnt - 1];
        // }
        // // see(pnt);
        // ans = max(sum[0][m - 1] - sum[0][pnt], x);
        cout << ans << endl;
    }
    return 0;
}