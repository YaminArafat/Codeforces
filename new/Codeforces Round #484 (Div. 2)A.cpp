#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==2)
    {
        if((s[0]=='1'&&s[1]=='1')||(s[0]=='0'&&s[1]=='0'))
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(n==1)
    {
        if(s[0]=='0')
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    for(int i=1; i<s.size()-1; i++)
    {
        if(s[i]=='0'&&s[i-1]=='0'&&s[i+1]=='0')
        {
            s[i]='1';
            cout<<"No"<<endl;
            return 0;
        }
        if((s[i]=='1'&&s[i+1]=='1')||(s[i]=='1'&&s[i-1]=='1'))
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    if((s[n-1]=='0'&&s[n-2]=='0')||(s[0]=='0'&&s[1]=='0'))
    {
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
    return 0;
}
