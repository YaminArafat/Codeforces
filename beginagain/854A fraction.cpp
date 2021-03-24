#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n,a,b,mx=-1.0,x;
    cin>>n;
    for(double i=1; i<n/2; i++)
    {
        if(__gcd((int)i,(int)(n-i))==1)
        {
            x=i/(n-i);
            //cout<<x<<endl;
            if(x>mx)
            {
                mx=x;
                a=i;
                b=n-i;
            }
        }
    }
    cout<<a<<" "<<b<<endl;
}
