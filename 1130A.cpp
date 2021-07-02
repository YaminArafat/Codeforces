#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int arr[n+5];
    int neg=0,pos=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
            neg++;
        else if(arr[i]>0)
            pos++;
    }
    if(n%2)
        x=(n/2)+1;
    else
        x=n/2;
    if(neg<x && pos<x)
        cout<<"0"<<endl;
    else
    {
        if(neg<x && pos>=x)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
