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

int arr[102][20010];
int main()
{
    fio;
    #ifndef ONLINE_JUDGE 
        rw;
    #endif
    int n,m,x;
    cin>>n>>m;
    string s;
    vector<string>svec;
    for0(i,n,1)
    {
        cin>>s;
        svec.pb(s+s);
    }
    vector<int> vec[2*n+5];
    for0(i,n,1)
    {
        for0(j,m*2,1)
        {
            vec[i].pb(svec[i][j]-'0');
        }
    }
    int indx;
    for0(i,n,1)
    {
        indx=find(vec[i].begin(),vec[i].end(),1)-vec[i].begin();
        if(indx==m*2)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    int currPosL=-1,currPosR=-1,lmin=0,rmin=0;
    for0(i,n,1)
    {
        for0(j,m*2,1)
        {
            if(vec[i][j])
            {
                currPosL=j;
            }
            else if (currPosL>=0)
            {
                lmin=j-currPosL;
                arr[i][j]=lmin;
            }
        }
        forr0(j,m*2,1)
        {
            if(vec[i][j])
            {
                currPosR=j;
            }
            else if(currPosR>=0)
            {
                rmin=currPosR-j;
                if(arr[i][j])
                arr[i][j]=min(arr[i][j],rmin);
                else
                arr[i][j]=rmin;
            }
        }
        // for0(j,m*2,1)
        // {
        //     cout<<arr[i][j]<<" ";
        // }
        // cout<<endl;
        currPosL=-1;
        currPosR=-1;
    }
    int sum=0,minMoves=INT_MAX;
    for0(j,m,1)
    {
        for0(i,n,1)
        {
            if(vec[i][j])
            continue;
            sum+=min(arr[i][j],arr[i][j+m]);
        }
        minMoves=min(minMoves,sum);
        sum=0;
    }
    cout<<minMoves<<endl;
    return 0;
}