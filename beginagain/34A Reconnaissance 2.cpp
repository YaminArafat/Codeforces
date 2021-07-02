#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,mn=1000000,a,b;
    cin>>n;
    vector<pair<int,int> >p;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        p.push_back(make_pair(x,i+1));
    }
    p.push_back(make_pair(p[0].first,p[0].second));
    for(int i=0;i<n;i++)
    {
        x=abs(p[i+1].first-p[i].first);
        if(x<mn)
        {
            mn=x;
            a=p[i].second;
            b=p[i+1].second;
        }
    }
    cout<<a<<" "<<b<<endl;
}
