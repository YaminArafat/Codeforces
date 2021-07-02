#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,k=0;
    cin>>n;
    string s,tmp;
    cin>>s;
    tmp=s;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]==s[i+1])
        {
            k++;
            //cout<<s[i]<<" "<<s[i+1]<<endl;
            s.erase(i+1,1);
            i--;
        }
        else
            i++;
    }
    if(s.size()%2)
    {
        s.erase(s.size()-1,1);
        k++;
    }
    cout<<k<<endl<<s<<endl;
    return 0;
}

/*/*for(int i=1;i<tmp.size()-1;i++)
    {
        if(tmp[i]==tmp[i+1])
        {
            x++;
            tmp.erase(i+1,1);
            i--;
        }
    }
    if(tmp.size()%2)
    {
        tmp.erase(tmp.size()-1,1);
        x++;
    }
    if(k>x)
    {
        cout<<x<<endl;
        cout<<tmp<<endl;
    }
    else
    {*/
