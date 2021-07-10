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
ll n, arr[500005], sum[500005];
map<ll,ll>cnt;
ll bSrch(ll l)
{
    ll low = l, high = n-1, mid;
    mid = (low + high) / 2;
    while (low <= high)
    {
        see3(low, high, mid);
        if (sum[mid] - sum[l - 1] == sum[l - 1])
        {
            see2(sum[mid] - sum[l-1], sum[l-1]);
            if (sum[n] - sum[mid] == sum[l - 1])
            {
                see2(sum[n] - sum[mid], sum[l-1]);
                return sum[mid];
            }
            else
                return 0;
        }
        else if (sum[mid] - sum[l - 1] > sum[l - 1])
        {
            high = mid-1;
        }
        else
            low = mid+1;
        mid=(low + high) / 2;
    }
    return 0;
}
int main()
{
    fio;
    #ifndef ONLINE_JUDGE
        rw;
    #endif
    ll ans = 0, func=0;
    cin >> n;
    for1(i, n, 1)
    {
        cin >> arr[i];
        sum[i] += sum[i - 1] + arr[i];
        cnt[sum[i]]++;
    }
    if(sum[n]%3 || n<3)
    {
        cout<<"0"<<endl;
        return 0;
    }
    // if(!sum[n])
    // {
    //     ans = cnt[sum[n]];
    //     ans -= 2;
    //     if(ans<=0)
    //     {
    //         ans = 0;
    //     }
    //     else
    //     {
    //         ans = ((ans)*(ans+1))/2;
    //     }
    //     cout<<ans<<endl;
    //     return 0;
    // }
    for1(i, n - 1, 1)
    {
        if (sum[i]*3==sum[n]*2)
        {
            ans+=func;
        }
        if (sum[i] == sum[n] / 3)
        {
            func++;
        }
    }
    cout << ans << endl;
    return 0;
}