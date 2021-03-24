#include <bits/stdc++.h>
using namespace std;
int main()
{
    int exp,newb,ans;
    cin>>exp>>newb;
    if(exp==newb)
    {
        ans=(exp+newb)/3;
    }
    else if(exp>=(2*newb))
    {
        ans=newb;
    }
    else if (exp<newb)
    {
        int x=newb/2;
        if(exp<=x)
        {
            ans=exp;
        }
        else
        {
            ans=(exp+newb)/3;
        }
    }
    else if (newb>=(2*exp))
    {
        ans=exp;
    }
    else if (exp>newb)
    {
        int x=exp/2;
        if(newb<=x)
        {
            ans=newb;
        }
        else
        {
            ans=(exp+newb)/3;
        }
    }
    cout<<ans<<endl;
    return 0;
}
