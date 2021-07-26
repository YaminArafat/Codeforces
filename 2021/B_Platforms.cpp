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
    ll n,d,m,l,s,x,y,k=0,N,low,high,factor,ans;
    cin>>n>>d>>m>>l;
    vpl range;
    for0(i,n,1)
    {
        x=i*m;
        y=i*m+l;
        range.pb(mk(x,y));
    }
    ans=y/d;
    ans++;
    ans=ans*d;
    for0(i,n-1,1)
    {
        low=range[i].ss;
        high=range[i+1].ff;
        factor=low/d;
        factor*=d;
        //see3(low,high,factor);
        if(factor>low && factor<high)
        {
            ans=factor;
            break;
        }
        else if(factor+d>low && factor+d<high)
        {
            ans=factor+d;
            break;
        }
    }
    cout<<ans<<endl;
    // vi indx;
    // N=(n-1)*m+l+1;
    // for0(i,N,1)
    // {
    //     indx.pb(1);
    // }
    // for0(i,N,1)
    // {
    //     x=k*m;
    //     y=k*m+l;
    //     if(i>=x && i<y)
    //     {
    //         indx[i]=-1;
    //     }
    //     else if(i>=x && i==y)
    //     {
    //         indx[i]=-1;
    //         k++;
    //         i=k*m;
    //         i--;
    //     }
    // }
    // // for0(i,N,1)
    // // {
    // //     see(indx[i]);
    // // }
    // for0(i,N,1)
    // {
    //     if(indx[i]==-1)
    //     {
    //         continue;
    //     }
    //     if(i%d==0)
    //     {
    //         cout<<i<<endl;
    //         break;
    //     }
    // }
    return 0;
}