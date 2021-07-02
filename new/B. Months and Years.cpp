#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[72]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
    int n,count=0,f=1;
    scanf("%d",&n);
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        for(;j<72;j++)
        {
            if(arr2[i]==arr[j])
            {
                count++;
                cout<<arr2[i]<<" "<<arr[j]<<endl;
                j++;
                break;
            }
            else
            {
                cout<<arr2[i]<<" "<<arr[j]<<endl;
                count=0;
                //if(arr[j]!=arr2[i-1])
                    j++;
                i=-1;
                //j==0;
                break;
            }
        }
    }
    if(count==n)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
