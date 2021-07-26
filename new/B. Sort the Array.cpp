#include <bits/stdc++.h>
using namespace std;
bool flag[100001];
int main()
{
    int n,i,j,count=0,f=0;
    cin>>n;
    int arr[n],cop[n],val[2];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        cop[i]=arr[i];
    }
    sort(cop,cop+n);
    for(i=0; i<n; i++)
    {
        if(arr[i]!=cop[i])
        {
            flag[i]=1;
            f=1;
        }
    }
    if(!f)
    {
        cout<<"no"<<endl;
    }
    //else{
    j=n-1;
    for(i=0;i<n;i++)
    {
        if(!flag[i])
        {
            continue;
        }
        cout<<arr[i]<<" "<<cop[i]<<endl;
        /*if(arr[i]>cop[i])
        {
            for(;j>i;j--)
            {
                if(cop[j]==arr[i])
                {

                }
            }
        }*/
    }
    /*if(count==2)
    {
        cout<<"yes"<<endl;

    }
    else
    {
        cout<<"no"<<endl;

    }*/
}
