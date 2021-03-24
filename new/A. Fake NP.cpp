#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,two=0,three=0,five=0,sev=0,ans;
    cin>>l>>r;
    if ((!(l%2) && r%2)||!(r%2)&&l%2||!(l%2)&&!(r%2)||(r-l)>0)
    {
        cout<<2<<endl;
    }
    else
    {
        cout<<l<<endl;
    }
    return 0;
}
