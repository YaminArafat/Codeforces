#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int x,y,z,dxy,dyz,dzx;
    cin>>x>>y>>z;
    dxy=abs(x-y);
    dyz=abs(y-z);
    dzx=abs(z-x);
    if (((dxy+dyz)<(dzx+dyz)) && ((dxy+dyz)<(dzx+dxy)))
    {
        cout<<dxy+dyz<<endl;
    }
    else if (((dzx+dyz)<(dxy+dyz)) && ((dzx+dyz)<(dzx+dxy)))
    {
        cout<<dzx+dyz<<endl;
    }
    else if (((dzx+dxy)<(dxy+dyz)) && ((dzx+dxy)<(dzx+dyz)))
    {
        cout<<dzx+dxy<<endl;
    }
    else if (((dzx+dxy)==(dxy+dyz)) && ((dzx+dxy)==(dzx+dyz)) && ((dxy+dyz)==(dzx+dyz)))
    {
        cout<<dxy+dyz<<endl;
    }
    return 0;
}
