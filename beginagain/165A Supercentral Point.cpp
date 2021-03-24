#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,u=0,d=0,l=0,r=0,ans=0;
    cin>>n;
    int arr1[n+5],arr2[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i]>>arr2[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if(arr1[i]==arr1[j] && arr2[i]>arr2[j])
            {
                u++;
            }
            if(arr1[i]==arr1[j] && arr2[i]<arr2[j])
            {
                d++;
            }
            if(arr1[i]>arr1[j] && arr2[i]==arr2[j])
            {
                l++;
            }
            if(arr1[i]<arr1[j] && arr2[i]==arr2[j])
            {
                r++;
            }
        }
        if(u&&d&&l&&r)
            ans++;
        u=0;
        d=0;
        l=0;
        r=0;
    }
    cout<<ans<<endl;
}
