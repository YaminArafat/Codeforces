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
    ll t, W, H, x1, y1, x2, y2, w, h;
    cin >> t;
    while (t--)
    {
        cin >> W >> H;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> w >> h;
        long double ans;
        if ((w <= x1 && h <= H) || (w <= (W - x2) && h <= H) || (w <= W && h <= y1) || (w <= W && h <= (H - y2)))
        {
            ans = 0;
        }
        else if ((w + (x2 - x1) > W) && (h + (y2 - y1) > H))
        {
            ans = -1;
        }
        else
        {
            long double p1w = 10000000000.0, p2w = 10000000000.0, p3h = 10000000000.0, p4h = 10000000000.0, gap;
            {
                gap = x1;
                gap = w - gap;
                if (gap + x2 <= W)
                    p1w = gap;
            }
            {
                gap = W - x2;
                gap = w - gap;
                if (x1 - gap >= 0)
                    p2w = gap;
            }
            {
                gap = y1;
                gap = h - gap;
                if (gap + y2 <= H)
                    p3h = gap;
            }
            {
                gap = H - y2;
                gap = h - gap;
                if (y1 - gap >= 0)
                    p4h = gap;
            }
            ans = min(p1w, min(p2w, min(p3h, p4h)));
        }
        cout << fixed << setprecision(10) << ans << endl;
    }
    return 0;
}