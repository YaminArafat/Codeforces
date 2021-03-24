#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,f=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        if(arr[arr[arr[i]-1]-1]-1==i)
        {
            cout<<"YES"<<endl;
            f=1;
            break;
        }
    }
    if(!f)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
