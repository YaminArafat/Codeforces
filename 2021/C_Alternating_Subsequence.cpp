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
    ll t, n, ans = 0, minn = LONG_LONG_MAX, maxx = LONG_LONG_MIN;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll arr[n + 5];
        for0(i, n, 1)
        {
            cin >> arr[i];
        }
        for0(i, n, 1)
        {
            if (arr[i] < 0)
            {
                // see3(arr[i], minn, maxx);
                if (-arr[i] < minn)
                {
                    minn = -arr[i];
                }
                if (maxx != LONG_LONG_MIN)
                {
                    ans += maxx;
                    maxx = LONG_LONG_MIN;
                }
                // see3(arr[i], minn, maxx);
            }
            else
            {
                // see3(arr[i], minn, maxx);
                if (arr[i] > maxx)
                {
                    maxx = arr[i];
                }
                if (minn != LONG_LONG_MAX)
                {
                    ans -= minn;
                    minn = LONG_LONG_MAX;
                }
                // see3(arr[i], minn, maxx);
            }
        }
        if (minn != LONG_LONG_MAX)
        {
            ans -= minn;
            minn = LONG_LONG_MAX;
        }
        if (maxx != LONG_LONG_MIN)
        {
            ans += maxx;
            maxx = LONG_LONG_MIN;
        }
        cout << ans << endl;
        ans = 0, minn = LONG_LONG_MAX, maxx = LONG_LONG_MIN;
    }
    return 0;
}