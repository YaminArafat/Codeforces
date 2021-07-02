#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[2010];
    int n,i=0,count=0;
    cin>>n;
    while(n--)
    {
        cin>>arr[i++];

    }
    n=i;
    i=0;

    for(;arr[i]==1;i++)count++;
    for(;arr[i]==2;i++)count++;
    for(;arr[i]==1;i++)count++;
    for(;arr[i]==2;i++)count++;

    cout<<count<<endl;


}

