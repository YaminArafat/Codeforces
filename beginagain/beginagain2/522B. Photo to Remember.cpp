#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,a,b,W,H;
    vector<ll>w,h,temp;
    cin>>n;
    ll sum=0,mx=0;
    for(ll i=0; i<n; i++)
    {
        cin>>a>>b;
        w.push_back(a);
        h.push_back(b);
        sum+=a;
    }
    temp=h;
    sort(temp.begin(),temp.end(),greater<ll>());
    for(ll i=0; i<n; i++)
    {
        W=sum-w[i];
        if(h[i]==temp[0])
        {
            H=temp[1];
        }
        else
            H=temp[0];
        /*if(i>0 && i<n-1)
        {
            mx=max(mx,*max_element(h.begin(),h.begin()+i-1));
            mx=max(mx,*max_element(h.begin()+i+1,h.end()));
        }
        if(i==n-1)
            mx=max(mx,*max_element(h.begin(),h.end()-1));
        if(!i)
            mx=max(mx,*max_element(h.begin()+i+1,h.end()));*/
        //H=mx;
        //mx=0;
        cout<<W*H<<" ";
    }
    cout<<endl;
    return 0;
}
