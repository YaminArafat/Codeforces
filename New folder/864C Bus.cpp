#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,f,k,pos=0,neg=0,temp,ans=0;
    cin>>a>>b>>f>>k;
    temp=b;
    for(int i=1; i<=k; i++)
    {
        if(i%2 && temp>=f)
        {
            temp-=f;
            if(temp<((a-f)*2) && i<k)
            {
                temp=b;
                if(temp<((a-f)*2))
                {
                    cout<<"-1"<<endl;
                    return 0;
                }
                else
                {
                    ans++;
                }
            }
            else if(i==k && temp<(a-f))
            {
                temp=b;
                if(temp<(a-f))
                {
                    cout<<"-1"<<endl;
                    return 0;
                }
                else
                {
                    ans++;
                }
            }
            temp-=(a-f);
        }
        else if(i%2 && temp<f)
        {
            cout<<"-1"<<endl;
            return 0;
        }
        if(i%2==0 && temp>=(a-f))
        {
            temp-=(a-f);
            if(i<k && temp<(f*2))
            {
                temp=b;
                if(temp<(f*2))
                {
                    cout<<"-1"<<endl;
                    return 0;
                }
                else
                {
                    ans++;
                }
            }
            else if(i==k && temp<f)
            {
                temp=b;
                if(temp<f)
                {
                    cout<<"-1"<<endl;
                    return 0;
                }
                else
                {
                    ans++;
                }
            }
            temp-=f;
        }
        else if(i%2==0 && temp<(a-f))
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<ans<<endl;
    return 0;
}
/*
if(i%2==0 && )
            if(i%2 && b>=f && b>=(a-f))
                pos++;
            else
            {
                cout<<"-1"<<endl;
                return 0;
            }
        if(i%2==0 && (b-(a-f))>=(a-f) && b>=f)
            neg++;
        else
        {
            cout<<"-1"<<endl;
            return 0;
        }
*/
