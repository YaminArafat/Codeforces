#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,sec=0,frst=0,fs,ss;
    cin>>n;
    ll arr[n+5];
    vector<ll>vecf,vecs,cal;
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            sec+=-arr[i];
            vecs.push_back(-arr[i]);
        }
        else
        {
            frst+=arr[i];
            vecf.push_back(arr[i]);
        }
    }
    //cout<<frst<<" "<<sec<<endl;
    if(sec>frst)
        cout<<"second"<<endl;
    else if(sec<frst)
        cout<<"first"<<endl;
    else
    {
        fs=vecf.size();
        ss=vecs.size();
        if(fs>ss)
        {
            ll i=0;
            for(;i<ss;i++)
            {
                if(vecf[i]!=vecs[i])
                {
                    if(vecf[i]>vecs[i])
                    {
                        cout<<"first"<<endl;
                        return 0;
                    }
                    else
                    {
                        cout<<"second"<<endl;
                        return 0;
                    }
                }
            }
            cout<<"first"<<endl;
            return 0;
        }
        else if(fs<ss)
        {
            ll i=0;
            for(;i<fs;i++)
            {
                if(vecf[i]!=vecs[i])
                {
                    if(vecf[i]>vecs[i])
                    {
                        cout<<"first"<<endl;
                        return 0;
                    }
                    else
                    {
                        cout<<"second"<<endl;
                        return 0;
                    }
                }
            }
            cout<<"second"<<endl;
            return 0;
        }
        else
        {
            ll i=0;
            for(;i<fs;i++)
            {
                if(vecf[i]!=vecs[i])
                {
                    if(vecf[i]>vecs[i])
                    {
                        cout<<"first"<<endl;
                        return 0;
                    }
                    else
                    {
                        cout<<"second"<<endl;
                        return 0;
                    }
                }
            }
        }
        if(arr[n-1]<0)
            cout<<"second"<<endl;
        else
            cout<<"first"<<endl;
    }
    return 0;
}
