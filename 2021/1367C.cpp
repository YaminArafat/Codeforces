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
    int t, n, k;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> n >> k >> s;
        int ans = 0, i = 0, prev, last = -1;
        while (i < n && s[i] != '1')
        {
            i++;
        }
        // see(i);
        last = i;
        if (i == n)
        {
            ans = n / (k + 1);
            if (n % (k + 1))
                ans++;
            cout << ans << endl;
            continue;
        }
        if (i > k)
        {
            // see2(i, k);
            ans++;
            // s[0] = '1';
            prev = 0;
            i = 1;
            last = 0;
        }
        else
        {
            // see2(-1, i);
            prev = i;
            last = i;
            i++;
        }
        while (i < n)
        {
            if (s[i] == '1')
            {
                last = i;
                // see(i);
                if (i - prev - 1 >= (2 * k + 1))
                {
                    // see2(i, prev);
                    ans += ((i - k) - (prev + k) - 1) / (k + 1);
                    if (((i - k) - (prev + k) - 1) % (k + 1))
                        ans++;
                    // i = prev + k + 1;
                    last = i;
                    prev = i;
                    // s[i] = '1';
                    i++;
                }
                else
                    prev = i, i++;
            }
            else
                i++;
        }
        last += k;
        // see2(last, ans);
        if (last >= 0 && last < n)
        {
            ans += (n - 1 - last) / (k + 1);
            if ((n - 1 - last) % (k + 1))
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}