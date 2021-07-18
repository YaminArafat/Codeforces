#include <bits/stdc++.h>
int main()
{
    int n,i,temp,j;
    scanf("%d",&n);
    temp=n;
    int arr[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp--;
        }
    }
    printf("%d\n",temp);
    return 0;
}
