#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,cnt=0,tmp=1;
    cin>>n;
    int arr[n+5];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        if(tmp<=arr[i])
        {
            cnt++;
            tmp++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
