#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,f=0;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    //arr.erase(arr.end()-1);
    //cout<<arr.size();
    for(int i=0;i<n-1;i++)
    {
        if(!f)
        {
            arr.erase(arr.end()-1);
            //cout<<arr.size()<<endl;
            f=1;
        }
        else
        {
            arr.erase(arr.begin());
            //cout<<arr.size()<<endl;
            f=0;
        }
    }
    cout<<arr[arr.size()-1]<<endl;
    return 0;
}
