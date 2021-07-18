#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
bool st[100];
int main()
{
    int n,i,j,count=0,k=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            k++;
        }
    }
    for(i=0; i<n-1; i++)
    {
        if(!st[i] && arr[i]!=0)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    st[j]=1;
                }
            }
        }
    }
    cout<<n-count-k<<endl;
    return 0;
}
