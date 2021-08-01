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
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n <= 6)
        {
            cout << "15" << endl;
        }
        // else if (n % 6 == 0)
        // {
        //     cout << (n / 6) * 15 * 1LL << endl;
        // }
        // else if (n % 8 == 0)
        // {
        //     cout << (n / 8) * 20 * 1LL << endl;
        // }
        // else if (n % 10 == 0)
        // {
        //     cout << (n / 10) * 25 * 1LL << endl;
        // }
        else
        {
            ll small, medium, large, mn, modS, modM, modL;
            // small = n / 6;
            // medium = n / 8;
            // large = n / 10;
            // modS = n % 6;
            // modM = n % 8;
            // modL = n % 10;
            // //see3(modS,modM,modL);
            // small = small * 15;
            // if (modS)
            //     small += 15;
            // medium = medium * 20;
            // if (modM)
            // {
            //     if (modM <= 6)
            //         medium += 15;
            //     else
            //         medium += 20;
            // }
            // large = large * 25;
            // if (modL)
            // {
            //     if (modL <= 6)
            //         large += 15;
            //     else if (modL <= 8)
            //         large += 20;
            //     else
            //         large += 25;
            // }
            // mn = min(small, min(medium, large));
            // long double nn = n;
            n += n % 2;
            n *= 2.5;
            mn = (ll)n;
            cout << mn << endl;
        }
    }
    return 0;
}