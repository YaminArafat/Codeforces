#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k,p,y,x;
    cin>>n>>k;
    ll low=1,high=n,mid,no,dno,po,out,ans=10000000000,sum=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        //mid=floor(mid);
        x=mid;
        //cout<<"high "<<high<<" low "<<low<<endl;
        //cout<<"x "<<x<<endl;
        p=log(x)/log(k);
        //p=floor(p);
        //cout<<"p "<<p<<endl;
        /*po=powl(k,p);
        cout<<"po "<<po<<endl;
        no=1.0-(1.0/po);
        cout<<"no "<<no<<endl;
        dno=(k-1.0);
        cout<<"dno "<<dno<<endl;
        y=no/dno;
        y=y*x;
        y=floor(y);
        cout<<"y "<<y<<endl;*/
        sum=0;
        for(ll i=1;i<=p;i++)
        {
            sum+=(x/powl(k,i));
        }
        y=sum;
        //cout<<"val "<<x+y<<endl;
        if(x+y>=n)
        {
            ans=min(ans,x);
            //cout<<"ans "<<ans<<endl;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
