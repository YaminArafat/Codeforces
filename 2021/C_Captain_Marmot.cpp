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

int distSQ(int px,int py,int qx,int qy)
{
    return (px-qx)*(px-qx)+(py-qy)*(py-qy);
}

bool isSquare(int ax,int ay,int bx,int by,int cx,int cy,int dx,int dy)
{
    int d1 = distSQ(ax,ay,bx,by);
    int d2 = distSQ(ax,ay,cx,cy);
    int d3 = distSQ(ax,ay,dx,dy);

    if(!d1||!d2||!d3)
    {
        return false;
    }

    if(d1==d2 && 2*d1 == d3 && 2*distSQ(cx,cy,dx,dy) == distSQ(bx,by,cx,cy))
    {
        return true;
    }
    if(d1==d3 && 2*d1 == d2 && 2*distSQ(cx,cy,dx,dy) == distSQ(bx,by,dx,dy))
    {
        return true;
    }
    if(d2==d3 && 2*d2 == d1 && 2*distSQ(bx,by,cx,cy) == distSQ(cx,cy,dx,dy))
    {
        return true;
    }
    return false;
}

int main()
{
    fio;
    // #ifndef ONLINE_JUDGE 
    //     rw;
    // #endif
    int n;
    cin>>n;
    int arrX[4*n+5];
    int arrY[4*n+5];
    int arrA[4*n+5];
    int arrB[4*n+5];
    for0(i,4*n,1)
    {
        cin>>arrX[i]>>arrY[i]>>arrA[i]>>arrB[i];
    }
    vpii allCoordinates[4*n*4+5];
    for0(i,4*n,4)
    {
        for0(j,4,1)
        {
            allCoordinates[i+j].pb(mk(arrX[i+j],arrY[i+j]));
            int tmpX=arrX[i+j]-arrA[i+j];
            int tmpY=arrY[i+j]-arrB[i+j];
            for0(k,3,1)
            {
                int tmp=tmpX;
                tmpX=-tmpY;
                tmpY=tmp;
                allCoordinates[i+j].pb(mk(tmpX+arrA[i+j],tmpY+arrB[i+j]));
            }
        }
    }
    for0(i,4*n,4)
    {
        int ans=INT_MAX,f=0;
        for (int k = 0; k < allCoordinates[i].size(); k++)
        {
            int pointAX = allCoordinates[i][k].ff;
            int pointAY = allCoordinates[i][k].ss;
            for (int l = 0; l < allCoordinates[i + 1].size(); l++)
            {
                int pointBX = allCoordinates[i+1][l].ff;
                int pointBY = allCoordinates[i+1][l].ss;
                for (int m = 0; m < allCoordinates[i + 2].size(); m++)
                {
                    int pointCX = allCoordinates[i+2][m].ff;
                    int pointCY = allCoordinates[i+2][m].ss;
                    for (int p = 0; p < allCoordinates[i + 3].size(); p++)
                    {
                        int pointDX = allCoordinates[i+3][p].ff;
                        int pointDY = allCoordinates[i+3][p].ss;
                        //cout<<k<<" "<<l<<" "<<m<<" "<<p<<endl;
                        //cout<<pointAX<<","<<pointAY<<" "<<pointBX<<","<<pointBY<<" "<<pointCX<<","<<pointCY<<" "<<pointDX<<","<<pointDY<<endl;
                        if(isSquare(pointAX,pointAY,pointBX,pointBY,pointCX,pointCY,pointDX,pointDY))
                        {
                            f=1;
                            //cout<<pointAX<<","<<pointAY<<" "<<pointBX<<","<<pointBY<<" "<<pointCX<<","<<pointCY<<" "<<pointDX<<","<<pointDY<<endl;
                            
                            ans=min(ans,k+l+m+p);
                            //see(ans);
                            //cout<<k<<" "<<l<<" "<<m<<" "<<p<<endl;
                        }
                        else
                        continue;
                    }
                }
            }
        }
        if(ans==INT_MAX)
        ans=-1;
        cout<<ans<<endl;
    }
    return 0;
}