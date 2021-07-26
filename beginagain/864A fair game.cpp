#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    map<int,int>mp;
    set<int>s;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
        s.insert(arr[i]);
    }
    if(s.size()>2 || s.size()==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        set<int>::iterator itr;
        for(itr=s.begin();itr!=s.end();itr++)
        {
            v.push_back(*itr);
        }
        if(mp[v[0]]==mp[v[1]])
        {

            cout<<"YES"<<endl<<v[0]<<" "<<v[1]<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
