#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,mx=0,k,x,p;
    cin>>n>>m;
    ll arr[n+5]= {0};
    vector<ll>loc[max(n,m)+5],vec[max(n,m)+5];
    for(int i=0; i<m; i++)
    {
        cin>>k;
        ll dum[k+5];
        mx=0;
        for(int j=0; j<k; j++)
        {
            cin>>p;
            dum[j]=p;
            if(!arr[p])
                arr[p]=k;
            else
            {
                arr[p]+=k-1;
                for(int d=0;d<vec[p].size();d++)
                {
                    for(int c=0;c<loc[vec[p][d]].size();c++)
                    {
                        arr[loc[vec[p][d]][c]]=arr[p];
                    }
                }
            }
            mx=max(arr[p],mx);
            loc[i+1].push_back(p);
            vec[p].push_back(i+1);
        }
        for(int j=0; j<k; j++)
        {
            arr[dum[j]]=mx;
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(arr[i]==0)
            arr[i]=1;
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*ll dum[k+5],mx=0;
        for(int j=0; j<k; j++)
        {
            cin>>x;
            dum[j]=x;
            if(!arr[x])
                arr[x]=k;
            else
                arr[x]+=k-1;
            mx=max(arr[x],mx);
            flag[x]=1;
        }
        cout<<mx<<endl;
        for(int j=1; j<=n; j++)
        {
            if(arr[j] && arr[j]<mx)
                arr[j]=mx;
        }
        for(int i=1; i<=n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;*/
