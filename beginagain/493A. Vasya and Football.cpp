#include<bits/stdc++.h>
using namespace std;
int main()
{
    string home,away,ans="";
    cin>>home>>away;
    int n,t,m;
    char p,c;
    cin>>n;
    map<char,map<int,int> >mpc;
    vector<string>vec;
    for(int i=0; i<n; i++)
    {
        cin>>t>>p>>m>>c;
        if(c=='y')
        {
            mpc[p][m]+=1000;
            if(mpc[p][m]==2000)
            {
                if(p=='h')
                {
                    ans+=home;
                    ans+=" ";
                }
                else
                {
                    ans+=away;
                    ans+=" ";
                }
                ans+=to_string(m);
                ans+=" ";
                ans+=to_string(t);
                vec.push_back(ans);
                ans="";
            }
        }
        else
        {
            if(mpc[p][m]<2000)
            {
                if(p=='h')
                {
                    ans+=home;
                    ans+=" ";
                }
                else
                {
                    ans+=away;
                    ans+=" ";
                }
                ans+=to_string(m);
                ans+=" ";
                ans+=to_string(t);
                vec.push_back(ans);
                ans="";
                mpc[p][m]=2000;
            }
        }
    }
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<endl;
    }
}
