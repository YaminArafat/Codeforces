#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                continue;
            }
            for(k=0; k<n; k++)
            {
                if(k==j||k==i)
                {
                    continue;
                }
                if(arr[i]==arr[j]+arr[k])
                {
                    printf("%d %d %d\n",i+1,j+1,k+1);
                    return 0;
                }
                else if(arr[j]==arr[i]+arr[k])
                {
                    printf("%d %d %d\n",j+1,i+1,k+1);
                    return 0;
                }
                else if(arr[k]==arr[j]+arr[i])
                {
                    printf("%d %d %d\n",k+1,j+1,i+1);
                    return 0;
                }
            }
        }
    }
    printf("-1\n");
    return 0;
}
