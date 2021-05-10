#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define for0(i, n, incr) for (int i = 0; i < (int)(n); i+=incr) 
#define for1(i, n, incr) for (int i = 1; i <= (int)(n); i+=incr) 
#define forc(i, l, r, incr) for (int i = (int)(l); i <= (int)(r); i+=incr) 
#define forr0(i, n, decr) for (int i = (int)(n) - 1; i >= 0; i-=decr) 
#define forr1(i, n, decr) for (int i = (int)(n); i >= 1; i-=decr) 
#define see(x) cout<<"\n"<<#x<<" = "<<(x)<<"\n";
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
    // #ifndef ONLINE_JUDGE s
    //     rw;
    // #endif
    ll n,k,minn,maxx;
    cin>>n>>k;
    if (k==1 && n>2)
    {
        minn=1;
        maxx=2;
    }
    else if (k==1)
    {
        if (n==2)
        {
            minn=1;
            maxx=1;
        }
        else
        {
            minn=0;
            maxx=0;
        }
    }
    else if (k==0 || k== n)
    {
        minn=0;
        maxx=0;
    }
    else
    {
        minn=1;
        maxx=n-k;
        // if(n>6 && k==2)
        // {
        //     maxx=4;
        // }
    }
    if(n>3*k)
    {
        maxx=2*k;
    }
    cout<<minn<<" "<<maxx<<endl;
    return 0;
}