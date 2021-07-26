#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,k,i,j,minN=1000000000000000000,temp,val,f=0;
    cin>>n>>k;
    unsigned long long int arr[k];
    for(i=0;i<k;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<k;i++)
    {
        if(arr[i]<=n && n)
        {
            j=n%arr[i];
            if(j<minN)
            {
                minN=j;
                temp=i+1;
                val=(n/arr[i]);
            }
            f=1;
        }
        else if (!f)
        {
            temp=1;
            val=0;
        }
    }
    cout<<temp<<" "<<val<<endl;
    return 0;
}
