#include <bits/stdc++.h>
using namespace std;
bool flag[100005];
int main()
{
    long long n,m,i,j,p1,p2,sum=0,f=0;
    pair<long long,long long>pair_;
    vector<pair<long long,long long> >vec;
    scanf("%lld %lld",&n,&m);
    long long arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%lld %lld",&p1,&p2);
        pair_.first=p1;
        pair_.second=p2;
        vec.push_back(pair_);
    }
    //sort(vec.begin(),vec.end());
    for(i=0;i<m;i++)
    {
        if(!flag[vec[i].first-1])
        {
            sum+=arr[vec[i].first-1];
            //cout<<arr[vec[i].first-1]<<" "<<sum<<endl;
            flag[vec[i].first-1]=1;
            flag[vec[i].second-1]=1;
            f++;
        }
        else
        {
            flag[vec[i].first-1]=1;
            flag[vec[i].second-1]=1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(!flag[i])
        {
            sum+=arr[i];
        }
        //cout<<flag[i]<<" ";
    }
    printf("%lld\n",sum);
    return 0;
}
// && !flag[vec[i].second-1]
