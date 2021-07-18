#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,x,b,y,i,j=0,k,l;
    cin>>n>>a>>x>>b>>y;
    if(a==b)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(x==y)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    vector<int>arr,brr;
    for(i=1; i<=n; i++)
        arr.push_back(i);
    for(i=1; i<=n; i++)
        arr.push_back(i);
    for(i=n; i>=1; i--)
        brr.push_back(i);
    for(i=n; i>=1; i--)
        brr.push_back(i);
    for(k=a-1,l=n-b; k<arr.size() && l<brr.size(); k++,l++)
    {
        //cout<<arr[k]<<" "<<brr[l]<<endl;
        if(arr[k]==brr[l])
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if((arr[k]==x && a!=x)|| (brr[l]==y &&b!=y))
            break;
    }
    cout<<"NO"<<endl;
    return 0;
}
