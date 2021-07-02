#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,mn=INT_MAX;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(k%arr[i]==0)
            mn=min(mn,k/arr[i]);
    }
    cout<<mn<<endl;
    return 0;
}
