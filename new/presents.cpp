#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,index,temp;
    cin>>n;
    int arr[n];
    int nwarr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for (i=0;i<n;i++)
    {
        temp=arr[i];
        arr[i]=i+1;
        index=temp;
        nwarr[index-1]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<nwarr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
