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
    ll n, ans = 0, total = 0;
    cin >> n;
    vi slopes;
    set<ll>s;
    map<pii, set<ll> > mp;
    map<pii, set<ll> >::iterator it;
    ll x[n + 5], y[n + 5];
    for0(i, n, 1)
    {
        cin >> x[i] >> y[i];
    }
    for0(i, n - 1, 1)
    {
        for (ll j = i + 1; j < n; j++)
        {
            //see2(i, j);
            //see2(y[j], y[i]);
            //see2(x[j], x[i]);
            // if (x[j] - x[i] == 0)
            //     slopes.pb(y[j]-y[i]);
            // else
            //     slopes.pb(y[j] - y[i] / x[j] - x[i]);
            ll gcd = __gcd(x[j] - x[i], y[j] - y[i]);
            ll X = (x[j] - x[i]) / gcd;
            ll Y = (y[j] - y[i]) / gcd;
            //see2(X, Y);
            if (Y < 0)
            {
                X = -X;
                Y = -Y;
            }
            if (!Y && X < 0)
            {
                X = -X;
                Y = -Y;
            }
            ll C = x[i] * Y - y[i] * X;
            //see3(X, Y, C);
            // if(mp[C])
            // continue;
            // slopes.pb(mk(x[j]-x[i], y[j]-y[i]));
            // mp[x[j]-x[i]]++;
            // mp[y[j]-y[i]]++;
            slopes.pb(C);
            //see(mp[mk(X, Y)].count(C));
            if (!mp[mk(X, Y)].count(C))
            {
                mp[mk(X, Y)].insert(C);
                total++;
                //see(mp[mk(X,Y)].size());
                ans += total - mp[mk(X, Y)].size();
            }
            //see(mp[mk(X, Y)].count(C));
        }
    }
    // cout<<mp.size()<<endl;

    // for0(i, slopes.size() - 1, 1)
    // {
    //     for (int j = i + 1; j < slopes.size(); j++)
    //     {
    //         // see2(slopes[i].ff,slopes[j].ss);
    //         // see2(slopes[j].ff,slopes[i].ss);
    //         // // if (slopes[i] != slopes[j])
    //         // //     ans++;
    //         // int ab12 = slopes[i].ff*slopes[j].ss;
    //         // int ab21 = slopes[j].ff*slopes[i].ss;
    //         // see2(ab12, ab21);
    //         // if(ab12-ab21!=0)
    //         // {
    //         //     ans++;
    //         // }
    //         if (slopes[i] != slopes[j])
    //         {
    //             ans++;
    //         }
    //     }
    // }
    cout << ans << endl;
    return 0;
}