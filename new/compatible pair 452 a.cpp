#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j,temp,temp2,maX1=-9223372036854775807,maX2=-9223372036854775807;
    cin>>n>>m;
    long long int arr_N[n];
    long long int arr_M[m];
    for (i=0; i<n; i++)
    {
        cin>>arr_N[i];
    }
    for (i=0; i<m; i++)
    {
        cin>>arr_M[i];
    }
    sort(arr_N,arr_N+n);
    //sort(arr_M,arr_M+m);
    for(i=1; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            temp=arr_N[i]*arr_M[j];
            if(temp>maX1)
            {
                maX1=temp;
            }
        }
        /*for(j=0; j<m; j++)
        {
            temp2=arr_N[i]*arr_M[j];
            if(temp2>maX2)
            {
                maX2=temp2;
            }
        }*/
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<m; j++)
        {
            temp2=arr_N[i]*arr_M[j];
            if(temp2>maX2)
            {
                maX2=temp2;
            }
        }
    }
    if(maX1>maX2)
    {
        cout<<maX2<<endl;
    }
    else
    {
        cout<<maX1<<endl;
    }
    return 0;
}
