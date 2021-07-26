#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,f=0,s=0,sum_1=0,sum_2=0,temp_1,temp_2,x=1,y=1000000,ans,m=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>500000)
        {
            s=1;
        }
        else
        {
            f=1;
        }
    }
    if(f&&s)
    {
        for(i=0; i<n; i++)
        {
            if(arr[i]<=500000)
            {
                temp_1=arr[i]-x;
                x=arr[i];
                sum_1+=temp_1;
            }
            if(arr[i]==500000)
            {
                m=1;
                break;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(arr[i]>=500000)
            {
                temp_2=y-arr[i];
                y=arr[i];
                sum_2+=temp_2;
            }
            if(arr[i]==500000)
            {
                m=1;
                break;
            }
        }
        if(m)
            ans=min(sum_1,sum_2);
        else
            ans=max(sum_1,sum_2);
    }
    else if (f||s)
    {
        if (f)
        {
            for(i=0; i<n; i++)
            {
                temp_1=arr[i]-x;
                x=arr[i];
                sum_1+=temp_1;
            }
            ans=sum_1;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                temp_2=y-arr[i];
                y=arr[i];
                sum_2+=temp_2;
            }
            ans=sum_2;
        }
    }
    cout<<ans<<endl;
    return 0;
}
