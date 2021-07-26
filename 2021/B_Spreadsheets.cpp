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
// vector<string>v;
// map<string, int> mp;
bool chkString(string chk)
{
    if (chk[0] == 'R' && chk[1] >= '0' && chk[1] <= '9')
    {
        for (int i = 2; i < chk.size(); i++)
        {
            if (chk[i] == 'C')
                return true;
        }
    }
    return false;
}
int main()
{
    fio;
#ifndef ONLINE_JUDGE
    rw;
#endif
    // vector<char> ch;
    // ch.pb('A');
    // for1(i, 25, 1)
    // {
    //     ch.pb(ch[i - 1] + 1);
    // }
    // for0(i,26,1)
    // {
    //     cout<<i+1<<" "<<ch[i]<<endl;
    // }
    // cout<<endl;
    // string p = "";
    // int j = 0, k = 1;
    // while (v.size() < 10e5)
    // {
    //     for0(i, 26, 1)
    //     {
    //         //see(p+ch[i]);
    //         mp[p + ch[i]] = k++;
    //         v.pb(p + ch[i]);
    //     }
    //     p = v[j];
    //     j++;
    // }
    // for0(i,v.size(),1)
    // {
    //     cout<<" "<<v[i]<<endl;
    // }
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        // cout<<s<<endl;
        if (chkString(s))
        {
            // cout<<s<<endl;
            int val = 0, fact = 1;
            string row, col = "";
            for (int i = s.size() - 1; i > 0; i--)
            {
                if (s[i] == 'C')
                {
                    // col = val;
                    // val = 0;
                    // fact = 1;
                    row = s.substr(1, i - 1);
                    break;
                }
                else
                {
                    val += (s[i] - '0') * fact;
                    fact *= 10;
                }
            }
            // see2(row ,val);
            // row = val;
            // val = col;
            // val-=2;
            while (val > 0)
            {
                val--;
                col += 'A' + val % 26;
                val /= 26;
            }
            // see(col);
            reverse(all(col));
            // see(col);
            cout << col << row << endl;
        }
        else
        {
            int val = 0, fact = 26, diff;
            string row, col;
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    row = s.substr(i + 1, s.size() - i - 1);
                    col = s.substr(0, i + 1);
                    break;
                }
                // else
                // {
                //     val += s[i]-'0'*fact;
                //     fact *= 10;
                // }
            }
            // see2(row, col);
            for0(i, col.size(), 1)
            {
                diff = col[i] - 'A' + 1;
                val = val * fact + diff;
                // fact *= 26;
            }
            // see(val);
            cout << "R" << row << "C" << val << endl;
        }
    }
    return 0;
}