#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int n,i,j,count=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(abs(arr[i]-arr[j])%2 && arr[i]!=arr[j])
            {
               count++;
            }
        }
        if(count==n-1)
        {
            cout<<i+1<<endl;
        }
        count=0;
    }
    return 0;
}
