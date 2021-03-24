#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d,s,mn,mx,mn_s=0,mx_s=0;
    pair<int,int>mp;
    vector<pair<int,int> >vec;
    cin>>d>>s;
    while(d--)
    {
        cin>>mn>>mx;
        mn_s+=mn;
        mx_s+=mx;
        mp.first=mn;
        mp.second=mx;
        vec.push_back(mp);
    }
    if(mn_s>s)
    {
        cout<<"NO"<<endl;
    }
    else if  (mx_s<s)
    {
        cout<<"NO"<<endl;
    }
    else if (mn_s<s)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<vec.size(); i++)
        {
            //cout<<mn_s<<endl;
            if(((vec[i].second-vec[i].first)+mn_s)<=s)
            {
                if(mn_s==s)
                {
                    break;
                }
                mn_s+=(vec[i].second-vec[i].first);
                vec[i].first=vec[i].second;
            }
            else
            {
                vec[i].first=s-mn_s+vec[i].first;
                mn_s+=s-mn_s;
            }
        }
        for(int i=0; i<vec.size(); i++)
        {
            cout<<vec[i].first<<" ";
        }
    }
    else if (mn_s==s)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<vec.size(); i++)
        {
            cout<<vec[i].first<<" ";
        }
    }
    else if (mx_s>s)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<vec.size(); i++)
        {
            if(mn_s==s)
            {
                break;
            }
            if(((vec[i].second-vec[i].first)+mn_s)<=s)
            {
                mn_s+=(vec[i].second-vec[i].first);
                vec[i].first=vec[i].second;
            }
            else
            {
                vec[i].first=s-mn_s+vec[i].first;
                mn_s+=s-mn_s;
            }
        }
        for(int i=0; i<vec.size(); i++)
        {
            cout<<vec[i].first<<" ";
        }
    }
    else if (mx_s==s)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<vec.size(); i++)
        {
            cout<<vec[i].second<<" ";
        }
    }
    return 0;
}
