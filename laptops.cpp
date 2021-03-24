#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,f=0;
    cin>>n;
    int arr_P[n];
    int arr_Q[n];
    for(i=0; i<n; i++)
    {
        cin>>arr_P[i]>>arr_Q[i];
    }
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr_P[i]<arr_P[j])
            {
                if(arr_Q[i]>arr_Q[j])
                {
                    f=1;
                    cout<<"Happy Alex"<<endl;
                    break;
                }
            }
        }
        if(f)
        {
            break;
        }
    }
    if(!f)
    {
        cout<<"Poor Alex"<<endl;
    }
    return 0;
}
