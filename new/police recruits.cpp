#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,count=0,ex=0;
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]==-1)
        {
            if (count==0)
            {
                ex++;
            }
            else
            {
                count-=1;
            }
        }
        else
        {
            count+=arr[i];
        }
    }
    cout<<ex<<endl;
    return 0;
}
