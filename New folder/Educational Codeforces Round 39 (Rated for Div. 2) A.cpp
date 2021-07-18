#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,B=0,C=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
        {
            B+=arr[i];
        }
        else
        {
            C+=arr[i];
        }
    }
    cout<<B-C<<endl;
    return 0;
}
