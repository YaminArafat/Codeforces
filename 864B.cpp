#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y=0,z=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            x++;
            if(x==2)
                y++;
        }
        else
        {
            x=0;
        }
    }
}
