#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r,p;
    cin>>n>>m;
    vector<pair<int,string> >vec[m+5];
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s>>r>>p;
        vec[r].push_back(make_pair(p,s));
    }
    for(int i=1; i<=m; i++)
    {
        sort(vec[i].rbegin(),vec[i].rend());
        if(vec[i].size()==2||vec[i][1].first!=vec[i][2].first)
        {
            cout<<vec[i][0].second<<" "<<vec[i][1].second<<endl;
        }
        else
            cout<<"?"<<endl;
    }
    return 0;
}
