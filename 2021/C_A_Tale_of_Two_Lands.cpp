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
map<ll, ll> flag;
ll n, arr[200005], ans;
// ll bSrch(ll l)
// {
//     ll low = l+1;
//     ll high = n;
//     ll mid = (low+high)/2;
//     while (low<=high)
//     {
//         if(arr[mid] == 2*arr[l])
//         {
//             ans = mid;
//             low = mid + 1;
//         }
//         else if(arr[mid] > 2*arr[l])
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             ans = mid;
//             low = mid + 1;
//         }
//         mid = (low+high)/2;
//     }
//     return ans;
// }
int main()
{
    fio;
#ifndef ONLINE_JUDGE
    rw;
#endif
    cin >> n;
    for1(i, n, 1)
    {
        cin >> arr[i];
        //flag[abs(arr[i])]++;
        if (arr[i] < 0)
            arr[i] = -arr[i];
    }
    sort(arr + 1, arr + n + 1);
    // map<ll,ll>mp;
    // for1(i,n,1)
    // {
    //     mp[arr[i]]=i;
    // }
    for1(i, n, 1)
    {
        ans += (upper_bound(arr + 1, arr + 1 + n, 2 * arr[i]) - arr) - i - 1;
        //see(ans);
    }
    cout << ans << endl;
    return 0;
}