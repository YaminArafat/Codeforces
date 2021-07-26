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
int n, start, curDiv, curRating;
int chng[2000005], divison[2000005];
int isValidMid(int rating)
{
    for0(i, n, 1)
    {
        if (rating >= 1900)
        {
            if (divison[i] == 2)
                return -1;
        }
        else
        {
            if (divison[i] == 1)
            {
                return 1;
            }
        }
        rating += chng[i];
    }
    return 0;
}
int bSrch()
{
    int ans = -199998101, low = -199998101, high = 200001900, mid, chkMid;
    mid = (low + high) / 2;
    //see3(low,mid,high);
    while (low <= high)
    {
        chkMid = isValidMid(mid);
        //see3(low, mid, high);
        if (chkMid == -1)
        {
            high = mid - 1;
        }
        else if (chkMid == 1)
        {
            low = mid + 1;
        }
        else
        {
            low = mid + 1;
            //see(mid);
            ans = mid;
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
    int ans;
    cin >> n;
    //see(n);
    for0(i, n, 1)
    {
        cin >> chng[i] >> divison[i];
    }
    ans = bSrch();
    if (ans == -199998101)
        cout << "Impossible" << endl;
    else if (ans == 200001900)
        cout << "Infinity" << endl;
    else
    {
        for0(i, n, 1)
        {
            ans += chng[i];
        }
        cout << ans << endl;
    }
    return 0;
}