#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k=0,maX=0,count=0,temp;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            temp=i;
        }
    }
    for(i=0;i<=temp;i++)
    {
        if(arr[i]==0)
        {
            count++;
        }
        if(arr[i]==1)
        {
            k++;
        }

    }
    if(count>=k)
    {
        cout<<count+k<<endl;
    }
    else
    {
        cout<<k<<endl;
    }
    return 0;
}
