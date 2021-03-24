#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,f=0,s=0,sum_1,sum_2,ans,m=0,max_=0,min_=1000000;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==500000)
        {
            m=1;
        }
        if(arr[i]>=500000)
        {
            s=1;
            if(arr[i]<min_)
            {
                min_=arr[i];
            }
        }
        if(arr[i]<=500000)
        {
            f=1;
            if(arr[i]>max_)
            {
                max_=arr[i];
            }
        }
    }
    if(f&&s)
    {
        sum_1=max_-1;
        sum_2=1000000-min_;
        if(m)
            ans=min(sum_1,sum_2);
        else
            ans=max(sum_1,sum_2);
    }
    else if (f||s)
    {
        if (f)
        {
            sum_1=max_-1;
            ans=sum_1;
        }
        else
        {
            sum_2=1000000-min_;
            ans=sum_2;
        }
    }
    cout<<ans<<endl;
    return 0;
}
