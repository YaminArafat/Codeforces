#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    string s;
    vector<string>vec;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        sort(s.begin(),s.end());
        vec.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        f=0;
        for(int j=0;j<vec[i].size()-1;j++)
        {
            if(vec[i][j]+1==vec[i][j+1])
                continue;
            else
            {
                cout<<"NO"<<endl;
                f=1;
                break;
            }
        }
        if(!f)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
