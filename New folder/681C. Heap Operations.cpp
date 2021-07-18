#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    string s;
    vector<pair<string,int> >ans;
    priority_queue<int>pq;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(s[0]=='i')
        {
            int x;
            scanf("%d",&x);
            pq.push(-x);
            ans.push_back(make_pair(s,x));
        }
        else if(s[0]=='g')
        {
            int x;
            scanf("%d",&x);
            while(!pq.empty() && -pq.top()<x)
            {
                ans.push_back(make_pair("removeMin",-1));
                pq.pop();
            }
            if(pq.empty()||(-pq.top())!=x)
            {
                ans.push_back(make_pair("insert",x));
                pq.push(-x);
            }
            ans.push_back(make_pair(s,x));
        }
        else if(s[0]=='r')
        {
            if(pq.empty())
            {
                ans.push_back(make_pair("insert",1));
            }
            else
            {
                pq.pop();
            }
            ans.push_back(make_pair("removeMin",-1));
        }
    }
    p=ans.size();
    printf("%d\n",p);
    for(int i=0; i<p; i++)
    {
        if(ans[i].first[0]!='r')
            cout<<ans[i].first<<" "<<ans[i].second<<"\n";
        else
            cout<<ans[i].first<<"\n";
    }
    return 0;
}




































































/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,mn=INT_MAX;
    string s;
    cin>>n;
    vector<pair<string,int> >vec;
    priority_queue<int>pq;
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(s=="removeMin")
            x=INT_MAX;
        else
            cin>>x;
        vec.push_back(make_pair(s,x));
    }
    for(int i=0; i<vec.size();)
    {
        //pq.push(-vec[i].second);
        mn=min(mn,vec[i].second);
        if(i<vec.size() && vec[i].first=="getMin" && vec[i].second>mn)
        {
            vec.insert(vec.begin()+i,mp[mn],make_pair("removeMin",INT_MAX));
            i+=mp[mn];
            mp[mn]=0;
            if(pq.empty())
                mn=INT_MAX;//cout<<i<<" "<<"out"<<endl;
            else
            {
                while(!pq.empty() && mn==-pq.top())
                    {
                        pq.pop();
                    }
                    mn=-pq.top();
                    //pq.pop();
            }
        }
        if(i<vec.size() && vec[i].first=="removeMin")
        {
loop:
            if(mp[mn]>0)
            {
                //cout<<mn<<" "<<mp[mn]<<endl;
                vec.insert(vec.begin()+i,mp[mn]-1,make_pair("removeMin",INT_MAX));
                i+=mp[mn];
                mp[mn]=0;
                if(pq.empty())
                    mn=INT_MAX;//cout<<i<<" "<<"out"<<endl;
                else
                {
                    while(!pq.empty() && mn==-pq.top())
                    {
                        pq.pop();
                    }
                    mn=-pq.top();
                    //pq.pop();
                }
            }
            else
            {
                vec.insert(vec.begin()+i,1,make_pair("insert",1));
                mn=1;
            }
            if(i<vec.size() && vec[i].first=="removeMin")
                goto loop;
        }
        /*if(i<vec.size() && vec[i].first=="removeMin")
        {
            if(mp[mn]>0)
            {
                //cout<<mn<<" "<<mp[mn]<<endl;
                vec.insert(vec.begin()+i,mp[mn]-1,make_pair("removeMin",INT_MAX));
                i+=mp[mn];
                mp[mn]=0;
                if(pq.empty())
                    mn=INT_MAX;//cout<<i<<" "<<"out"<<endl;
                else
                {
                    while(!pq.empty() && mn==-pq.top())
                    {
                        pq.pop();
                    }
                    mn=-pq.top();
                    //pq.pop();
                }
            }
            else
            {
                vec.insert(vec.begin()+i,1,make_pair("insert",1));
                mn=1;
            }
        }*/
//cout<<"ok"<<endl;
/* if(i<vec.size() && vec[i].first=="getMin" && mp[vec[i].second]==0)
 {
     int cnt=0;
     while(!pq.empty() && -pq.top()<vec[i].second)
     {
         pq.pop();
         cnt++;
     }
     if(!pq.empty() && cnt)
     mn=-pq.top();
     else
         mn=INT_MAX;
     vec.insert(vec.begin()+i,cnt,make_pair("removeMin",INT_MAX));
     i+=cnt;
     vec.insert(vec.begin()+i,1,make_pair("insert",vec[i].second));
 }
 //cout<<"not ok"<<endl;
 if(i<vec.size() && vec[i].first=="insert")
 {
     mp[vec[i].second]++;
     pq.push(-vec[i].second);
     i++;
 }
 else
     i++;
 //cout<<i<<" "<<vec.size()<<endl;
}
cout<<vec.size()<<endl;
for(int i=0; i<vec.size(); i++)
{
 if(vec[i].first!="removeMin")
     cout<<vec[i].first<<" "<<vec[i].second<<endl;
 else
     cout<<vec[i].first<<endl;
}
vec.clear();
return 0;
}*/
