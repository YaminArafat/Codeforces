#include <bits/stdc++.h>
using namespace std;
bool vis[100020];
int main()
{
    int n;
    cin>>n;
    int arr[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    vector<int>vec;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            //if(i!=j)
            //{
            vec.push_back(arr[i]+arr[j]);
            //}
        }
    }
    int cnt=1,mx=0;
    sort(vec.begin(),vec.end());
    /*for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }*/
    for(int i=0; i<vec.size()-1; i++)
    {
        if(vec[i]==vec[i+1])
            cnt++;
        else
        {
            //cout<<endl<<cnt<<" "<<i<<endl;
            mx=max(mx,cnt);
            cnt=1;
        }
    }
    if(!mx)
        mx++;
    cout<<mx<<endl;
    return 0;
}
