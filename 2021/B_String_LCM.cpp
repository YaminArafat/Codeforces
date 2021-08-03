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
    int c, sSize, tSize, ans = -1;
    string s, t;
    cin >> c;
    while (c--)
    {
        cin >> s >> t;
        sSize = s.size();
        tSize = t.size();
        int tmpcnt = 0;
        string sSmall, tSmall;
        for0(i, sSize, 1)
        {
            string tmp = s.substr(0, i + 1);
            // see2(i+1, tmp);
            forc(j, i + 1, sSize, i + 1)
            {
                if (j + i < sSize)
                {
                    // see2(j, s.substr(j, i+1));
                    if (tmp == s.substr(j, i + 1))
                    {
                        tmpcnt++;
                    }
                    else
                        break;
                }
            }
            tmpcnt++;
            // see2(tmpcnt, i+1);
            if (tmpcnt * (i + 1) == sSize)
            {
                sSmall = tmp;
                tmpcnt = 0;
                break;
            }
            tmpcnt = 0;
        }
        // see(sSmall);
        if (sSmall.empty())
            sSmall = s;
        for0(i, tSize, 1)
        {
            string tmp = t.substr(0, i + 1);
            forc(j, i + 1, tSize, i + 1)
            {
                if (j + i < tSize)
                {
                    if (tmp == t.substr(j, i + 1))
                    {
                        tmpcnt++;
                    }
                    else
                        break;
                }
            }
            tmpcnt++;
            if (tmpcnt * (i + 1) == tSize)
            {
                tSmall = tmp;
                tmpcnt = 0;
                break;
            }
            tmpcnt = 0;
        }
        if (tSmall.empty())
            tSmall = t;
        if (sSmall == tSmall)
        {
            int sSmallQ, tSmallQ;
            sSmallQ = sSize / sSmall.size();
            tSmallQ = tSize / tSmall.size();
            for0(i, (sSmallQ * tSmallQ) / __gcd(sSmallQ, tSmallQ), 1)
            {
                cout << sSmall;
            }
            cout << endl;
        }
        // if (sSize > tSize)
        // {
        //     string tmp;
        //     bool f = false;
        //     int cnt1 = 0;
        //     for0(i, sSize, tSize)
        //     {
        //         if (i + tSize - 1 < sSize)
        //         {
        //             tmp = s.substr(i, tSize);
        //             if (tmp == t)
        //             {
        //                 // f = false;
        //                 // break;
        //                 cnt1++;
        //             }
        //         }
        //     }
        //     if (cnt1 * tSize != sSize)
        //     {
        //         int cnt = 0;
        //         for0(i, sSize, 1)
        //         {
        //             if (s[i] == s[0])
        //                 cnt++;
        //         }
        //         if (cnt == sSize)
        //             f = true;
        //         cnt = 0;
        //         for0(i, tSize, 1)
        //         {
        //             if (t[i] == s[0])
        //                 cnt++;
        //         }
        //         if (cnt != tSize)
        //             f = false;
        //         if (f)
        //         {
        //             for0(i, (sSize * tSize) / __gcd(sSize, tSize), 1)
        //             {
        //                 cout << s[0];
        //             }
        //             cout << endl;
        //         }
        //         else
        //             cout << "-1" << endl;
        //     }
        //     else
        //     {
        //         cout << s << endl;
        //     }
        // }
        // else if (sSize < tSize)
        // {
        //     string tmp;
        //     bool f = false;
        //     int cnt1 = 0;
        //     for0(i, tSize, sSize)
        //     {
        //         if (i + sSize - 1 < tSize)
        //         {
        //             tmp = t.substr(i, sSize);
        //             if (tmp == s)
        //             {
        //                 // f = false;
        //                 // break;
        //                 cnt1++;
        //             }
        //         }
        //     }
        //     if (cnt1 * sSize != tSize)
        //     {
        //         int cnt = 0;
        //         for0(i, sSize, 1)
        //         {
        //             if (s[i] == s[0])
        //                 cnt++;
        //         }
        //         if (cnt == sSize)
        //             f = true;
        //         cnt = 0;
        //         for0(i, tSize, 1)
        //         {
        //             if (t[i] == s[0])
        //                 cnt++;
        //         }
        //         if (cnt != tSize)
        //             f = false;
        //         if (f)
        //         {
        //             for0(i, (sSize * tSize) / __gcd(sSize, tSize), 1)
        //             {
        //                 cout << s[0];
        //             }
        //             cout << endl;
        //         }
        //         else
        //             cout << "-1" << endl;
        //     }
        //     else
        //     {
        //         cout << t << endl;
        //     }
        // }
        // else if (s == t)
        // {
        //     cout << s << endl;
        // }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}