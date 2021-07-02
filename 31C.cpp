#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> >vec;
vector<int>ans;
int flag[5005];
int main()
{
    int n,cnt=0,x,y,mx=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
    }
    for(int i=0; i<vec.size(); i++)
    {
        for(int j=0; j<vec.size(); j++)
        {
            if(i==j)
                continue;
            if(vec[i].second>vec[j].first)
            {
                if(vec[j].second>vec[i].first)
                {
                    cnt++;
                    flag[j+1]++;
                }
            }
        }
    }
    //cout<<cnt<<endl;
    /*if(cnt==n*(n-1))
    {
        cout<<"0"<<endl;
        return 0;
    }
    if(cnt==0)
    {
        cout<<n<<endl;
        for(int i=0; i<n; i++)
            cout<<i+1<<" ";
        return 0;
    }*/
    /*for(int i=1; i<=n; i++)
        mx=max(mx,flag[i]);*/
    for(int i=1; i<=n; i++)
        if(2*flag[i]==cnt)
            ans.push_back(i);
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;

}
