#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=k-1;; i++)
    {
        if(arr[i])
        {
            cout<<i+1<<endl;
            return 0;
        }
        if(i==n-1)
            i=-1;
    }
}
