#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,mn,mx,r;
    cin>>n;
    x=n/7;
    r=n%7;
    mn=x*2;
    mx=x*2;
    if(r<=2)
    {
        mx+=r;
    }
    else if(r>5)
    {
        mn++;
        mx+=2;
    }
    else
    {
        mx+=2;
    }
    cout<<mn<<" "<<mx<<endl;
    return 0;
}
