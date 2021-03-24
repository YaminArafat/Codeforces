#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count=0,max=0;
    cin>>n;
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            count++;
            if(count>max)
            {
                max=count;
            }
        }
        else
        {
            count=0;
        }
    }
    cout<<max+1<<endl;
    return 0;
}
