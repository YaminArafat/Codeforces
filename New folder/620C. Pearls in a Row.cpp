#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=1,ans=0;
    cin>>n;
    int typo[n+5];
    map<int,int>pos,cnt;
    vector<pair<int,int> >seg;
    for(int i=0; i<n; i++)
    {
        cin>>typo[i];
        if(cnt[typo[i]])
        {
            ans++;
            seg.push_back(make_pair(k,i+1));
            k=i+2;
            cnt.clear();
            pos.clear();
            continue;
        }
        pos[typo[i]]=k;
        cnt[typo[i]]++;
    }
    if(!ans)
        cout<<"-1"<<endl;
    else
    {
        cout<<ans<<endl;
        if(seg[ans-1].second!=n)
            seg[ans-1].second=n;
        for(int i=0; i<ans; i++)
            cout<<seg[i].first<<" "<<seg[i].second<<endl;
    }
    return 0;
}
