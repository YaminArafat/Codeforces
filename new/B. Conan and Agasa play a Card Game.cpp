#include <bits/stdc++.h>
using namespace std;
bool flag[100005];
int main()
{
    int n,c=0,mx=0,j;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    /*for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }*/
    for(int i=n-1; i>0; i--)
    {
        if(!flag[i])
        {
            c++;
            for(j=i+1; j<n; j++)
            {
                if(arr[i]>arr[j])
                {
                    flag[j]=1;
                }
            }
        }
    }
    if(c%2)
    {
        printf("Conan\n");
    }
    else
    {
        printf("Agasa\n");
    }
    return 0;
}
