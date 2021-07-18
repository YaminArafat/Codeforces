#include <bits/stdc++.h>
#define mx 3500000
#define ll long long
using namespace std;
bool flag[mx+5];
vector<ll>vec,divisor;
//set<ll>ans;
void seive()
{
    for(int i=3; i*i<=mx; i+=2)
    {
        if(!flag[i])
        {
            for(int j=i*i; j<=mx; j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    vec.push_back(2);
    for(ll i=3; i<=mx; i+=2)
    {
        if(!flag[i])
        {
            vec.push_back(i);
        }
    }
}
ll factorize(ll n)
{
    bool expo=0;
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            expo=1;
            while(n%i==0)
            {
                n/=i;
                divisor.push_back(i);
            }
        }
    }
    if(n>1)
    {
        divisor.push_back(n);
    }
    if(!expo)
        return 0;
    else
        return 1;
}
int main()
{
    //seive();
    ll q,tmp,cnt=0,f=0;
    cin>>q;
    if(q<=3)
    {
        cout<<"1"<<endl<<f<<endl;
        return 0;
    }
    tmp=q;
    if(!factorize(q))
    {
        cout<<"1"<<endl<<f<<endl;
        return 0;
    }
    else if(divisor.size()>2)
    {
        cout<<"1"<<endl<<divisor[0]*divisor[1]<<endl;
        return 0;
    }
    else
    {
        cout<<"2"<<endl;
        return 0;
    }
    /*sort(divisorisor.begin(),divisorisor.end());
    for(int i=0; i<divisorisor.size()-1; i++)
    {
        if(divisorisor[i].first==divisorisor[i+1].first)
        {
            divisorisor[i].first++;
            divisorisor.erase(divisorisor.begin()+i+1);
        }
    }
    for(int i=0; i<divisorisor.size(); i++)
    {
        for(int j=1; j<=divisorisor[i].second; j++)
        {
            ans.insert(divisorisor[i].first*j);
            ans.insert(q/(divisorisor[i].first*j));
        }
    }
    //reverse(ans.begin(),ans.end());
    set<ll>::iterator it;
    for(it=ans.end(); it!=ans.begin(); it--)
    {
        if(tmp%(*it)==0 && tmp!=(*it))
        {
            tmp=*it;
            if(!f)
                f=*it;
            cnt++;
        }
        cout<<*it<<endl;
    }
    if(cnt%2==0 || !cnt)
    {
        cout<<"1"<<endl<<f<<endl;

    }
    else
        cout<<"2"<<endl;*/
    return 0;
}
