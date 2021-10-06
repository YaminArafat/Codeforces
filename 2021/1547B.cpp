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
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        char ch = 'a';
        bool ok = true;
        // string ans = "";
        int i = 0;
        while (i < s.size() && s[i] != 'a')
        {
            i++;
        }
        if (i == s.size())
        {
            cout << "NO" << endl;
            continue;
        }
        // see(i);
        int k = 1, cnt = 1, l = i, r = i;
        while (cnt <= s.size())
        {
            if (l - 1 >= 0 && s[l - 1] == ch + k)
            {
                l--;
                k++;
            }
            else if (r + 1 < s.size() && s[r + 1] == ch + k)
            {
                r++;
                k++;
            }
            // if (i + k < s.size() && s[i + k] == ch + k)
            // {
            //     // see((char)(ch + k));
            //     i += k;
            //     k++;
            // }
            // else if (i - k >= 0 && s[i - k] == ch + k)
            // {
            //     // see((char)(ch + k));
            //     i -= k;
            //     k++;
            // }
            // else if (i - 1 >= 0 && s[i - 1] == (ch + k))
            // {
            //     // see((char)(ch + k));
            //     i--;
            //     k++;
            // }
            // else if (i + 1 < s.size() && s[i + 1] == ch + k)
            // {
            //     // see((char)(ch + k));
            //     i++;
            //     k++;
            // }
            else
            {
                // see3(i, k, cnt);
                if (cnt < s.size())
                    ok = false;
                break;
            }
            cnt++;
            if (cnt == s.size())
                break;
        }
        // for0(i, 26, 1)
        // {
        //     ans += ch + i;
        // }
        // sort(all(s));
        // for0(i, s.size(), 1)
        // {
        //     if (s[i] != ans[i])
        //     {
        //         ok = false;
        //         break;
        //     }
        // }
        if (ok)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}