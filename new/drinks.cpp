#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    float temp,ans,sum=0.0;
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        temp=arr[i]/100.0;
        sum+=temp;
    }
    n=(float)n;
    ans=(sum/n)*100.0;
    printf("%.12f\n",ans);
    return 0;
}
