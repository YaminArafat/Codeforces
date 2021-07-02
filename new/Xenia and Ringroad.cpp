#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    long long int n,m,i,count;
    cin>>n>>m;
    long long int arr2[m];
    vector<long long int>arr;
    for(i=0; i<m; i++)
    {
        cin>>arr2[i];
        arr.push_back(arr2[i]);
    }
    count=arr[0]-1;
    for(i=0; i<m-1; i++)
    {
        if(arr[i]<=arr[i+1])
        {
            count+=(arr[i+1]-arr[i]);
        }
        else
        {
            count+=(n-arr[i]+arr[i+1]);
        }
    }
    cout<<count<<endl;
    return 0;
}
