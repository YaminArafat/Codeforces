#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,tmp;
    cin>>n>>m;
    tmp=m;
    int arr[n+5];
    map<int,int>flag;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        flag[arr[i]]=1;
    }
    int i=1,k=0;
    vector<int>ans;
    while(tmp>=i)
    {
        if(flag[i])
        {
            i++;
            continue;
        }
        tmp-=i;
        ans.push_back(i);
        k++;
        i++;
    }
    cout<<k<<endl;
    for(int i=0; i<k; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
