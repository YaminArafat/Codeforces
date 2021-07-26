#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,x,y,cnt=0,i;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    for(i=s.size()-1; i>=n-y; i--)
    {
        if(s[i]=='1')
            cnt++;
    }
    if(s[i]=='0')
        cnt++;
    i--;
    if(i>=0)
    {
        for(; i>=n-x; i--)
        {
            if(s[i]=='1')
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
