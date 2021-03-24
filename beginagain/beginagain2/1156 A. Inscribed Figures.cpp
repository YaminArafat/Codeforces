#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    int arr[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if((arr[i]==2 && arr[i+1]==3)||(arr[i]==3 && arr[i+1]==2))
        {
            cout<<"Infinite"<<endl;
            return 0;
        }
        else
        {
            if(arr[i]==1)
            {
                if(arr[i+1]==2)
                {
                    ans+=3;
                }
                else
                {
                    ans+=4;
                }
            }
            else if(arr[i]==2)
            {
                ans+=3;
            }
            else if(arr[i]==3)
            {
                if(arr[i+1]==1)
                {
                    ans+=4;
                    if(i<n-2 && arr[i+2]==2)
                    {
                        ans--;
                    }
                }
            }
        }
    }
    cout<<"Finite"<<endl<<ans<<endl;
    return 0;
}
