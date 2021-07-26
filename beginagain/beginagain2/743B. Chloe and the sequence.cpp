#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x=1;
    for(ll i=1;i<=49;i++)
    {
        x+=x+1;
    }
    cout<<x<<endl;
}
