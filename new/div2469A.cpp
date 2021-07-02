#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a;
    cin>>l>>r>>a;
    if(l<r)
    {
        if(a<=r)
        {
            int d=r-l;
            if(d<=a)
            {
                l+=d;
                a-=d;
                a=a/2;
                l+=a;
                r+=a;
                cout<<l+r<<endl;
            }
            else
            {
                l+=a;
                cout<<l*2<<endl;
            }
        }
        else
        {

            int d=r-l;
            l=l+d;
            a=a-d;
            a/=2;
            l+=a;
            r+=a;
            cout<<l+r<<endl;
        }
    }
    else if (l>r)
    {
        if(a<=l)
        {
            int d=l-r;
            if(d<=a)
            {
                r+=d;
                a-=d;
                a=a/2;
                l+=a;
                r+=a;
                cout<<l+r<<endl;
            }
            else
            {
                r+=a;
                cout<<r*2<<endl;
            }
        }
        else
        {
            int d=l-r;
            r=r+d;
            a-=d;
            a/=2;
            l+=a;
            r+=a;
            cout<<l+r<<endl;
        }
    }
    else if (l==r)
    {
        a=a/2;
        l+=a;
        r+=a;
        cout<<l+r<<endl;
    }
    return 0;
}
