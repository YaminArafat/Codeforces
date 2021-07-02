#include <bits/stdc++.h>
using namespace std;
int s_map[200];
bool flag[200];
int main()
{
    int cnt=0;
    string s,t;
    cin>>s>>t;
    vector<pair<char,char> >vec;
    for(int i=0; i<s.size(); i++)
    {
        if(s_map[(int)s[i]]!=0)
        {
            if(s_map[(int)s[i]]!=(int)t[i])
            {
                cout<<"-1"<<endl;
                return 0;
            }
        }
        else
        {
            s_map[(int)s[i]]=(int)t[i];
        }
        //cout<<s_map[s[i]]<<endl;
    }
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=t[i] && !flag[(int)s[i]] && !flag[(int)t[i]] && (s_map[s_map[(int)s[i]]]==(int)s[i] || s_map[s_map[(int)s[i]]]==0))
        {
            cnt++;
            flag[(int)s[i]]=true;
            flag[(int)t[i]]=true;
            vec.push_back(make_pair(s[i],t[i]));
        }
        else if (s[i]!=t[i] && !flag[(int)s[i]] && (s_map[s_map[(int)s[i]]]!=(int)s[i] || s_map[s_map[(int)s[i]]]!=0))
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<cnt<<endl;
    for(int i=0; i<cnt; i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    return 0;
}
