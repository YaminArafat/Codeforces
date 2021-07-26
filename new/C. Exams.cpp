#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x,y,temp2,temp1;
    cin>>n;
    temp2=n;
    pair<int,int>pyr;
    vector<pair<int,int> >vec;
    while(temp2--)
    {
        cin>>x>>y;
        pyr.first=x;
        pyr.second=y;
        vec.push_back(pyr);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(vec[j].first>=vec[j+1].first)
            {
                swap(vec[j],vec[j+1]);
            }
            else if (vec[j].first==vec[j+1].first)
            {
                if(vec[j].second>vec[j+1].second)
                {
                    swap(vec[j],vec[j+1]);
                }
            }
        }
    }
    temp1=vec[0].second;
    for(int i=1;i<n;i++)
    {
        if(temp1<=vec[i].second)
        {
            temp1=vec[i].second;
        }
        else
        {
            temp1=vec[i].first;
        }
    }
    cout<<temp1<<endl;
    return 0;
}
