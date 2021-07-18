#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int arr[]={6,2,5,5,4,5,6,3,7,6};
    ll sum=0;
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        int tmp=i;
        while(tmp)
        {
            sum+=arr[tmp%10];
            tmp/=10;
        }
    }
    cout<<sum<<endl;
    return 0;
}
