#include <bits/stdc++.h>
#define maxx 300005
using namespace  std;
vector<int>arr;
int increament(int x)
{
    return x+1;
}
int main()
{
    int x,y=5;
    while(y--)
    {
        cin>>x;
        arr.push_back(x);
    }
    arr.erase(arr.begin()+2);
    transform(arr.begin(),arr.end(),arr.begin(),increament);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
