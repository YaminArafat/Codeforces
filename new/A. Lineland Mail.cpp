#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,max_,min_;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<n; i++)
    {
        if(i==n-1)
        {
            max_=abs(arr[i]-arr[0]);
            min_=abs(arr[i]-arr[i-1]);
        }
        else if(i && i<n-1)
        {
            max_=max(abs(arr[0]-arr[i]),abs(arr[n-1]-arr[i]));
            min_=min((abs(arr[i]-arr[i+1])),(abs(arr[i-1]-arr[i])));
        }
        else
        {
            max_=abs(arr[i]-arr[n-1]);
            min_=abs(arr[i]-arr[i+1]);
        }
        printf("%d %d\n",min_,max_);
    }
    return 0;
}
