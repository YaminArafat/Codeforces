#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,h,cnt=0,ans=1,v1=0,v2=0,v3=0;
    cin>>n>>h;
    int arr[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==h)
            cnt++;
    }
    if(cnt==n)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int f=h;
    for(int i=0; i<n; i++)
    {
        if(f-arr[i]==1)
        {
            f=arr[i];
        }
        else
        {
            f=h;
            if(f-arr[i]>1)
            {
                cout<<"0"<<endl;
                return 0;
            }
            else if(f-arr[i]<=1 && i>0)
            {
                i--;
            }
        }
    }
    vector<pair<long long,long long> >vec;
    vec.push_back(make_pair(0,0));
    for(int i=1; i<=n; i++)
    {
        long long sec=vec[i-1].second+1;
        vec.push_back(make_pair(sec,sec+vec[i-1].second));
    }
    /*for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }*/
    for(int i=0; i<n;)
    {
        if(h-arr[i]==1)
        {
            //cout<<i<<" "<<arr[i]<<endl;
            int tmp=i;
            while(i<n && h-arr[i]==1)
            {
                i++;
            }
            v1=(vec[i-tmp].first);
            v3=vec[i-tmp-1].first;
            i--;
            tmp=i;
            long long tmp2=h;
            while(i<n && tmp2-arr[i]==1)
            {
                tmp2=arr[i];
                i++;
            }
            v2=i-tmp;
            ans=((ans%1000000007)*(max(v1,v3*v2))%1000000007)%1000000007;
            v1=0;
            v2=0;
            v3=0;
        }
        else
            i++;
    }
    cout<<ans<<endl;
    return 0;
}
