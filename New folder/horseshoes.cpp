#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a==b && b==c && c==d)
    {
        cout<<"3"<<endl;
    }
    else if ( (a==b && c!=d && a!=c && a!=d)  || (b==c && a!=d && b!=a && b!=d) || (c==d && a!=b && c!=a && c!=b) || (a==c && b!=d && a!=b && a!=d) || (a==d && b!=c && a!=b && a!=c) || (b==d && a!=c && b!=a && b!=c))
    {
        cout<<"1"<<endl;
    }
    else if ((a==b && b==c && c!=d) || (a==b && b==d) || (a==c && c==d) || (b==c && c==d))
    {
        cout<<"2"<<endl;
    }
    else if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
    {
        cout<<"0"<<endl;
    }
    else if ((a==b && d==c) || (b==c && a==d) || (a==c && b==d))
    {
        cout<<"2"<<endl;
    }
    return 0;
}
