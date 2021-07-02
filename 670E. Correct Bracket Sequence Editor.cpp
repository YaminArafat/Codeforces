#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p,opn=0;
    scanf("%d %d %d",&n,&m,&p);
    string bra,op,ans;
    cin>>bra>>op;
    ans=bra;
    int arr[n+5],pair_[n+5];
    vector<pair<int,int> >vec;
    for(int i=0;i<bra.size();i++)
    {
        if(bra[i]=='(')
        {
            arr[opn]=i;
            opn++;
        }
        else
        {
            opn--;
            pair_[arr[opn]]=i;
            pair_[i]=arr[opn];
            //vec.push_back(make_pair(arr[opn],i));
        }
    }
    /*for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }*/
    for(int i=p-1,j=0;i<bra.size() && j<op.size();j++)
    {
        if(op[j]=='R')
        {
            i++;
        }
        else if(op[j]=='L')
        {
            i--;
        }
        else
        {
            cout<<"in "<<i<<endl;
            if(pair_[i]<i)
            {
                ans.replace(pair_[i],i-pair_[i]+1,"");
            }
            else
            {
                ans.replace(i,pair_[i]-i+1,"");
            }
            cout<<"out "<<ans<<endl;
        }
    }
    cout<<ans<<endl;
    return 0;
}
