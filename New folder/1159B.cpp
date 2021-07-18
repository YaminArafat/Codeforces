#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=INT_MAX,mn=INT_MAX;
    cin>>n;
    int arr[n+5],bra[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mn=min(mn,arr[i]);
        bra[i]=mn;
    }
    for(int i=1;i<n;i++)
    {
        x=min(x,bra[i]/i);
//cout<<bra[i]<<" "<<i<<" "<<x<<endl;
    }
    if(x<=mn)
    cout<<x<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
