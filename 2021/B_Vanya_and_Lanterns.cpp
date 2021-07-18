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
ll n, l;
ll arr[1000 + 5];
bool isValid(long double m)
{
    if (arr[1] != 0)
    {
        if (arr[1] - arr[0] > m)
            return false;
    }
    if (arr[n] != l)
    {
        if (arr[n + 1] - arr[n] > m)
            return false;
    }
    for (int i = 2; i <= n; i++)
    {
        long double x = arr[i] - arr[i - 1];
        x /= 2;
        if (x > m)
        {
            //see3(arr[i-1], arr[i], m);
            return false;
        }
    }
    return true;
}
long double bSrch()
{
    long double low = 0, high = 10e9+5, mid, ans;
    mid = (low + high) / 2;
    while (fabs(high - low) >= 10e-11)
    {
        // see3(low, mid, high);
        if (isValid(mid))
        {
            // see(mid);
            ans = mid;
            high = mid;
        }
        else
        {
            low = mid;
        }
        mid = (low + high) / 2;
    }
    return ans;
}
int main()
{
    fio;
#ifndef ONLINE_JUDGE
    rw;
#endif
    cin >> n >> l;
    arr[0] = 0;
    for1(i, n, 1)
    {
        cin >> arr[i];
    }
    arr[n + 1] = l;
    sort(arr, arr + n + 2);
    cout << fixed << setprecision(10) << bSrch() << endl;
    return 0;
}