#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,tmp,sasha=0,dima=0,s_tmp=1,d_tmp=1;
    cin>>n;
    vector<pair<long long,long long> >vec;
    pair<long long,long long>p;
    for (long long i=0;i<2*n;i++)
    {
      cin>>tmp;
      p=make_pair(tmp,i+1);
      vec.push_back(p);
    }
    sort(vec.begin(),vec.end());
    for (long long i=0,j=1;i<(2*n)-1,j<2*n;i+=2,j+=2)
    {
        //cout<<vec[i].first<<" "<<vec[i].second<<endl;
        sasha+=abs(vec[i].second-s_tmp);
        s_tmp=vec[i].second;
        dima+=abs(vec[j].second-d_tmp);
        d_tmp=vec[j].second;
    }
    cout<<sasha+dima<<endl;
    return 0;
}

