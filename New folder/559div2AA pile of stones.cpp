#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,p=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='-')
        {
            if(p>0)
                p--;
            else
                m++;
        }
        else
            p++;
    }
    cout<<p<<endl;
    return 0;
}
