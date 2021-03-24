#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<=n;i++)
    {
        arr[i]=i;
    }
    for(int i=2; i<=n && k; i++)
    {
        if(i%2==0)
        {
            arr[i]=arr[i-1]+k;
        }
        else
        {
            arr[i]=arr[i-1]-k;
        }
        k--;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
