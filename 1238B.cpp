#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,r,ans=0;
    cin>>q;
    while (q--)
    {
        cin>>n>>r;
        ans=0;
        int arr[n+5],x=0,k=0,tmp=1,j=0,temp[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for (int i=0; i<n-1; i++)
        {
            if (arr[i] != arr[i+1])
                temp[j++] = arr[i];
        }
        temp[j++] = arr[n-1];
        for(int i=0; i<=j-tmp; i++)
        {
            temp[i]-=r;
            if(temp[i]<=0)
            {
                x++;
            }
            if(i>=n-tmp-1)
            {

                i=x-1;
                k++;
                ans++;
                tmp++;
            }
        }
        cout<<ans<<endl;
    }
}
