#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,j=1,count=0,k;
    cin>>n;
    int arr[n];
    for(i=1,k=0;i<=n;i+=j,k++)
    {
        arr[k]=i;
        sum+=arr[k];
        if(sum>n)
        {
            break;
        }
        count++;
        if(sum==n)
        {
            break;
        }
        j++;
    }
    cout<<count<<endl;
    return 0;
}

