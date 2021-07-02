#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int a,b,c,t,gcd;
    cin>>a>>b;
    c=a*b;
    if (a==0)
    {
        gcd=a;
    }
    else if (b==0)
    {
        gcd=b;
    }
    else
    {
        while (b!=0)
        {
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    cout<<"GCD : "<<gcd<<endl;
    cout<<"LCM : "<<c/gcd<<endl;
    return 0;
}
