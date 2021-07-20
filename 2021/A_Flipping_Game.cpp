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
    int n, maxx = -1, k = 0, tmp = 0, cntL = 0, x = 0, one[105] = {0}, zero[105] = {0};
    cin >> n;
    int arr[n + 5];
    for0(i, n, 1)
    {
        cin >> arr[i];
        // if(arr[i])
        // {
        //     one[i] = one[i-1]+1;
        //     zero[i] = zero[i-1];
        // }
        // else
        // {
        //     zero[i] = zero[i-1]+1;
        //     one[i] = one[i-1];
        // }
    }
    for0(i, n, 1)
    {
        for (int j = i; j < n; j++)
        {
            // maxx = max (maxx, one[i]-one[j]+zero[i]-zero[j]);
            for0(k, n, 1)
            {
                // see3(i, j, k);
                if (k >= i && k <= j)
                    cntL += 1 - arr[k];
                else
                    cntL += arr[k];
            }
            maxx = max(maxx, cntL);
            // see2(maxx, cntL);
            cntL = 0;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i])
    //         cntL++;
    //     else
    //     {
    //         // k = (upper_bound(arr + i, arr + n, 0) - arr);
    //         x = i;
    //         while (x < n && !arr[x])
    //         {
    //             k++;
    //             x++;
    //         }
    //         // see3(i, k, x);
    //         i = x - 1;
    //         tmp = x;
    //         // k -= i;
    //         // i = tmp - 1;
    //         // see2(i,k);
    //         // if (i + k < n && arr[i + k])
    //         //     k++;
    //         k += cntL;
    //         // see3(i, k, cntL);
    //         cntL = 0;
    //         while (tmp < n && arr[tmp])
    //         {
    //             k++;
    //             tmp++;
    //         }
    //         // if (i > 0 && arr[i - 1])
    //         //     k++;
    //         // see2(k, tmp);
    //         maxx = max(maxx, k);
    //         k = 0;
    //         // i += tmp;
    //         // k += (upper_bound...);
    //     }
    // }
    if (maxx < 0)
        maxx = 0;
    cout << maxx << endl;
    return 0;
}