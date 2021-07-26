#include <bits/stdc++.h>
using namespace std;
//bool flag[200005];
int main()
{
    int n,x;
    cin>>n;
    pair<int,int>p;
    vector<pair<int,pair<int,int> > >vec;
    //vector<int>vc;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        p.first=2;
        p.second=i+1;
        /*vec[i].first=x;
        vec[i].second.first=2;
        vec[i].second.second=i+1;*/
        //vec[i].second.second=i+1;
        vec.push_back(make_pair(x,p));
    }
    sort(vec.begin(),vec.end());
    /*for(int i=0; i<n; i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second.first<<" "<<vec[i].second.second<<endl;
    }*/
    string s;
    cin>>s;
    int k=0,tmp=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            //k=0;
            //tmp=k;
            while(1)
            {
                if(vec[k].second.first==2)
                {
                    vec[k].second.first--;
                    //flag[k]=1;
                    break;
                }
                else
                {
                    k++;
                }
            }
            cout<<vec[k].second.second<<" ";
            //k=tmp;
            /*if(!vec[k].second.first)
            {
                //vec.erase(vec.begin()+k);
            }*/
        }
        else
        {
            tmp=n-1;
            while(vec[tmp].second.first!=1)
            {
                //if(!flag[k])
                {
                    tmp--;
                }
            }
            /*while(1)
            {
                if(vec[k].second.first==1)
                {
                    k--;
                }
                else
                {
                    vec[k+1].second.first--;
                    break;
                }
            }*/
            cout<<vec[tmp].second.second<<" ";
            vec[tmp].second.first--;
        }
    }
    return 0;
}

