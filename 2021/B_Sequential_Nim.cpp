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
    // #ifndef ONLINE_JUDGE 
    //     rw;
    // #endif
    int t, n, f, s, o, d;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n + 5];
        f = 0;
        s = 0;
        o = 0;
        d = 0;
        for0(i, n, 1)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                o++;
            }
            else if (!d)
            {
                d = i+1;
            }
        }
        d--;
        // see2(o,d);
        if (o == n)
        {
            if (o % 2)
            {
                f++;
            }
            else
                s++;
        }
        else
        {
            if (d % 2)
                s++;
            else
                f++;
        }
        // see2(f,s);
        // for0(i, n, 1)
        // {
        //     if (i + 1 < n - 1)
        //     {
        //         if (f == s)
        //         {
        //             if (arr[i] == 1)
        //             {
        //                 f++;
        //             }
        //             else
        //             {
        //                 if (arr[i + 1] == 1)
        //                 {
        //                     if (arr[i + 2] != 1 || i + 2 == n - 1)
        //                         f++;
        //                     else
        //                     {
        //                         f++;
        //                         s++;
        //                     }
        //                 }
        //                 else
        //                 {
        //                     f++;
        //                     s++;
        //                 }
        //             }
        //         }
        //         else
        //         {
        //             if (arr[i] == 1)
        //             {
        //                 s++;
        //             }
        //             else
        //             {
        //                 if (arr[i + 1] == 1)
        //                 {
        //                     if (arr[i + 2] != 1 || i + 2 == n - 1)
        //                         s++;
        //                     else
        //                     {
        //                         f++;
        //                         s++;
        //                     }
        //                 }
        //                 else
        //                 {
        //                     f++;
        //                     s++;
        //                 }
        //             }
        //         }
        //     }
        //     // if (i + 2 < n)
        //     // {
        //     //     if (f == s)
        //     //     {
        //     //         if(arr[i+2] == 1)
        //     //         {
        //     //         }
        //     //         if (arr[i + 1] == 1)
        //     //         {
        //     //             f++;
        //     //         }
        //     //         else
        //     //         {
        //     //             if (arr[i] == 1)
        //     //             {
        //     //                 f++;
        //     //             }
        //     //             else
        //     //             {
        //     //                 f++;
        //     //                 s++;
        //     //             }
        //     //         }
        //     //     }
        //     //     else
        //     //     {
        //     //         if (arr[i + 1] == 1)
        //     //         {
        //     //             s++;
        //     //         }
        //     //         else
        //     //         {
        //     //             if (arr[i] == 1)
        //     //             {
        //     //                 s++;
        //     //             }
        //     //             else
        //     //             {
        //     //                 s++;
        //     //                 f++;
        //     //             }
        //     //         }
        //     //     }
        //     // }
        //     else if (i + 1 < n)
        //     {
        //         if (f == s)
        //         {
        //             if (arr[i] == 1)
        //             {
        //                 f++;
        //             }
        //             else
        //             {
        //                 f++;
        //                 s++;
        //             }
        //         }
        //         else
        //         {
        //             if (arr[i] == 1)
        //             {
        //                 s++;
        //             }
        //             else
        //             {
        //                 f++;
        //                 s++;
        //             }
        //         }
        //     }
        //     else
        //     {
        //         if (f == s)
        //         {
        //             f++;
        //         }
        //         else
        //         {
        //             s++;
        //         }
        //     }
        // }
        if (f > s)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
    return 0;
}