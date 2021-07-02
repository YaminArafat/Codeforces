#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pos,l,r,ans=0;
    cin>>n>>pos>>l>>r;
    if(pos>=l && pos<=r)
    {
        if(l>1 && r<n)
        {
            ans=((pos-l)<=(r-pos)?(pos-l)*2+(r-pos):(r-pos)*2+(pos-l))+2;
        }
        else if(r<n)
        {
            ans=r-pos+1;
        }
        else if (l>1)
        {
            ans=pos-l+1;
        }
    }
    else
    {
        if(pos<l)
        {
            ans=l-pos+1;
            if(r<n)
                ans+=r-l+1;
        }
        else if(pos>r)
        {
            ans=pos-r+1;
            if(l>1)
                ans+=r-l+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
