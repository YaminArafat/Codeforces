#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i;
    cin>>n;
    long long int arr1[n];
    long long int arr2[n];
    long long int arr3[n-1];
    for(i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    for(i=0; i<n-1; i++)
    {
        cin>>arr2[i];
    }
    arr2[i]=0;
    for(i=0; i<n-2; i++)
    {
        cin>>arr3[i];
    }
    arr3[i]=0;
    sort(arr1,arr1+n);
    sort(arr2,arr2+n-1);
    for(i=0; i<n; i++)
    {
        if(arr1[i]!=arr2[i])
        {
            cout<<arr1[i]<<endl;
            break;
        }
    }
    sort(arr3,arr3+n-2);
    for(i=0; i<n-1; i++)
    {
        if(arr2[i]!=arr3[i])
        {
            cout<<arr2[i]<<endl;
            break;
        }
    }
    return 0;
}
