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
    int n,a=0,g=0,c=0,t=0,q=0,r=0;
    string s;
    cin>>n>>s;
    if(n%4)
    {
        cout<<"==="<<endl;
        return 0;
    }
    for0(i,n,1)
    {
        if(s[i]=='A')
        {
            a++;
        }
        else if(s[i]=='G')
        {
            g++;
        }
        else if(s[i]=='C')
        {
            c++;
        }
        else if(s[i]=='T')
        {
            t++;
        }
        else
            q++;
    }
    //see3(a,s,q);
    if(!q)
    {
        if(a==g && g==c && c==t)
        {
            cout<<s<<endl;
        }
        else
            cout<<"==="<<endl;
        return 0;
    }
    // if(!a || !g || !c || !t)
    // {
    //     cout<<"==="<<endl;
    //     return 0;
    // }
    int A=(n/4)-a,G=(n/4)-g,C=(n/4)-c,T=(n/4)-t;
    if(A<0 || G<0 || C<0 || T<0)
    {
        cout<<"==="<<endl;
        return 0;
    }
    r=A+G+C+T;
    if(r==q)
    {
        for0(i,n,1)
        {
            if(s[i]!='?')
            continue;
            if (A)
            {
                s[i]='A';
                A--;
            }
            else if (G)
            {
                s[i]='G';
                G--;
            }
            else if (C)
            {
                s[i]='C';
                C--;
            }
            else if (T)
            {
                s[i]='T';
                T--;
            }
        }
        cout<<s<<endl;
    }
    else
        cout<<"==="<<endl;
    return 0;
}