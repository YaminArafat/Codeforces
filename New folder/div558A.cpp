#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(!m)
    {
        cout<<"1"<<endl;
        return 0;
    }
    if(n<m*2)
    {
        cout<<n-m<<endl;
    }
    else
        cout<<m<<endl;
    return 0;
}
