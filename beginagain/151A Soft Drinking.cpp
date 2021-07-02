#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,a,b,x,y,z;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a=k*l;
    b=c*d;
    x=a/nl;
    y=p/np;
    z=(min(x,min(b,y)))/n;
    cout<<z<<endl;
}
