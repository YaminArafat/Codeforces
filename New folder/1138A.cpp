#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+10],one=0,two=0,mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            one++;
            if(two)
            {
                if(i<n && arr[i+1]==2)
                {
                    mx=max(mx,min(one,two));
                    two=0;
                }
                if(i==n-1)
                {
                    mx=max(mx,min(one,two));
                    two=0;
                }
            }
        }
        else
        {
            two++;
            if(one)
            {
                if(i<n && arr[i+1]==1)
                {
                    mx=max(mx,min(one,two));
                    one=0;
                }
                if(i==n-1)
                {
                    mx=max(mx,min(one,two));
                    one=0;
                }
            }
        }

    }
    cout<<mx*2<<endl;
    return 0;
}
