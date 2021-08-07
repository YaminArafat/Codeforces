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
string s;
// int f;
// bool chkMid(int mid, int indx)
// {
//     if (indx < 0 || indx > s.size() - 1)
//         return false;
//     if (indx == s.size() - 1)
//     {
//         f = 1;
//         return true;
//     }
//     forr1(i, mid, 1)
//     {
//         if (indx + i < s.size() - 1 && s[indx + i] == 'R')
//         {
//             chkMid(mid, indx + i);
//             if (f)
//             {
//                 f = 1;
//                 return true;
//             }
//         }
//         else if (indx + i < s.size() - 1 && s[indx + i] == 'L')
//         {
//             chkMid(mid, indx - i);
//             if (f)
//             {
//                 f = 1;
//                 return true;
//             }
//         }
//         if (f)
//             return true;
//     }
//     return false;
// }
// int bSrch()
// {
//     int low = 0, high = s.size() - 1, mid, ans;
//     mid = (low + high) / 2;
//     see3(low, mid, high);
//     while (low <= high)
//     {
//         if (chkMid(mid, 0))
//         {
//             // see(mid);
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//         mid = (low + high) / 2;
//         // see3(low, mid, high);
//     }
//     return ans;
// }
int main()
{
    fio;
#ifndef ONLINE_JUDGE
    rw;
#endif
    int t;
    string tmp;
    cin >> t;
    while (t--)
    {
        cin >> s;
        // s = "";
        // s += "S";
        // s += tmp;
        s += "R";
        // cout << bSrch() << endl;
        int prev = -1, ans = -1;
        for0(i, s.size(), 1)
        {
            if (s[i] == 'L')
                continue;
            ans = max(ans, i - prev);
            prev = i;
        }
        cout << ans << endl;
    }
    return 0;
}