#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1; i>=0; i--)
    {
        int x;
        double sq;
        if(arr[i]>0)
        {
            int temp=abs(arr[i]);
            sq=sqrt(temp);
            x=sq;
        }
        if((sq!=x && arr[i])||arr[i]<0)
        {
            cout<<arr[i]<<endl;
            break;
        }
    }
    return 0;
}
