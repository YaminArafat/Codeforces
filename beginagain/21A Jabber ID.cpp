#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    while(i<s.size()&&s[i]!='@')
    {
        if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')||(s[i]>='0'&&s[i]<='9')||s[i]=='_')
        {
            ;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
        i++;
    }
    if(i==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    i++;
    int j=i,k=0;
    if(s[i]=='.')
    {
        cout<<"NO"<<endl;
        return 0;
    }
    while(i<s.size()&&s[i]!='/')
    {
        if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')||(s[i]>='0'&&s[i]<='9')||s[i]=='_'||s[i]=='.')
        {
            if(s[i]=='.')
            {
                if(s[i+1]=='.')
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
        i++;
    }
    i--;
    if(s[i]=='.')
    {
        cout<<"NO"<<endl;
        return 0;
    }
    i++;
    if(i==j)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    j=i;
    while(i<s.size())
    {
        if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')||(s[i]>='0'&&s[i]<='9')||s[i]=='_'||s[i]=='/')
        {
            ;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
        i++;
    }
    i--;
    if(i==j)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
}
