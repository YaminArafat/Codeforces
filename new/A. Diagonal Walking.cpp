#include <bits/stdc++.h>
using namespace  std;
int main()
{
    int n,i;
    scanf("%d",&n);
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if((s[i]=='R'&&s[i+1]=='U') || (s[i]=='U'&&s[i+1]=='R'))
        {
            string prev(s.begin(),s.begin()+i);
            string tmp(s.begin()+i+2,s.end());
            prev.append("D");
            s.clear();
            s=prev+tmp;
            prev.clear();
            tmp.clear();
        }
    }
    cout<<s.size()<<endl;
    return 0;
}
