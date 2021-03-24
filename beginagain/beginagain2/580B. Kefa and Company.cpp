#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<pair<ll,ll> >v,v2;
vector<ll>v3;
map<ll,ll>mp;
vector<ll>::iterator it;
ll n,d,m,s,mx,low,sum,tmp,mid,pos;
int main()
{
    cin>>n>>d;
    for(ll i=0; i<n; i++)
    {
        cin>>m>>s;
        v.push_back(make_pair(m,s));
    }
    sort(v.begin(),v.end());
    for(ll i=1;i<n;i++)
    {
        v[i].second+=v[i-1].second;
    }
    /*for(ll i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;*/
    v2.push_back(make_pair(0,0));
    v3.push_back(0);
    for(ll i=n-1;i>=0;i--)
    {
        if(!mp[v[i].first])
        {
            mp[v[i].first]=1;
            v2.push_back(v[i]);
            v3.push_back(v[i].first);
        }
    }
    /*for(ll i=0;i<v2.size();i++)
    {
        cout<<v2[i].first<<" "<<v2[i].second<<endl;
    }
    cout<<endl;*/
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());
    /*for(ll i=0;i<v2.size();i++)
    {
        cout<<v2[i].first<<" "<<v2[i].second<<endl;
    }
    cout<<endl;*/
    for(ll i=1;i<v3.size();i++)
    {
        it=lower_bound(v3.begin(),v3.end(),v2[i].first+d);
        pos=it-v3.begin();
        if(it==v3.end()||v3[pos]-v2[i].first>=d)
        {
            pos--;
        }
        //cout<<"pos : "<<pos<<endl;
        mx=max(mx,v2[pos].second-v2[i-1].second);
        //cout<<"max : "<<mx<<endl;
    }
    /*sum=v[0].second;
    low=v[0].first;
    mx=sum;
    for(ll i=0; i<n-1; i++)
    {
        if(v[i+1].first-low<d)
        {
            sum+=v[i+1].second;
        }
        else
        {
            low=v[tmp+1].first;
            sum=v[tmp+1].second;
            i=tmp;
            tmp++;
            //continue;
            /*if(v[i+1].first-v[i].first<d)
            {
                low=v[i].first;
                sum=v[i].second;
                i--;
            }
            else
            {
                low=v[i+1].first;
                sum=v[i+1].second;
            }
        }
        mx=max(mx,sum);
    }*/
    cout<<mx<<endl;
    return 0;
}
