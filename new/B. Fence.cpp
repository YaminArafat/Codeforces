#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,mn=1000000001,temp,x;
    scanf("%d %d",&n,&k);
    vector<int>arr;
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        arr.push_back(x);
    }
    //if(n>=k)
    //{
    for(i=0; i<=n-k; i++)
    {
        int sum=0;
        //if(i>=k)
        //{
        for(j=i; j<k+i; j++)
        {
            sum+=arr[j];
        }
        if(sum<mn)
        {
            mn=sum;
            temp=i+1;
        }
        //}
    }
    //}
    printf("%d\n",temp);
    return 0;
}
