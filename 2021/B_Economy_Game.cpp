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
    ll n,house=1234567,car=123456,comp=1234;
    cin>>n;
    if(n%comp==0 || n%house==0 || n%car==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for1(i,8100,1)
    {
        if(i*car< n){
            if((n-i*car)%comp==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
            break;
    }
    for1(i,810,1)
    {
        if(i*house< n){
            if((n-i*house)%comp==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
            break;
    }
    for1(i,810,1)
    {
        if(i*house< n){
            if((n-i*house)%car==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
            break;
    }
    for1(i,810,1){
        if (i*house < n){
            for1(j,8100,1){
                if(i*house+j*car < n){
                    if((n-(i*house+j*car))%comp==0){
                        cout<<"YES"<<endl;
                        //see2(i,j);
                        return 0;
                    }
                }
                else
                    break;
            }
        }
        else
            break;
    }
    cout<<"NO"<<endl;
    return 0;
}