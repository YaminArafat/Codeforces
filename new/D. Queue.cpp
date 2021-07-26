#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum=0,ans=1,f=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    sum=arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]<sum && i<n-1)
        {
            for (j=i+1; j<n; j++)
            {
                if(arr[j]>=sum)
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    f=1;
                    break;
                }
            }
            if(!f)
            {
                ans=i;
                break;
            }
            f=0;
        }
        if(arr[i]>=sum)
        {
            ans=i+1;
        }
        sum+=arr[i];
    }
    printf("%d\n",ans);
    return 0;
}
