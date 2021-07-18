#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int n,a,b,c,i,j,d;
    cin>>a>>b>>c;
    for (j=1; c!=0; j++)
    {
        if (a>c)
        {
            for (i=1; i<=a; i++)
            {
                if (a%i==0 && c%i==0)
                {
                    d=c-i;
                }
            }

            cout<<d<<endl;
        }
        else if (a<c)
        {
            for (i=1; i<=c; i++)
            {
                if (a%i==0 && c%i==0)
                {
                    d=c-i;
                }
            }

            cout<<d<<endl;
        }
        if (b<d)
        {
            for (i=1; i<=d; i++)
            {
                if (d%i==0 && b%i==0)
                {
                    d=d-i;
                }
            }

            cout<<d<<endl;
        }
        else if (b>d)
        {
            for (i=1; i<=b; i++)
            {
                if (d%i==0 && b%i==0)
                {
                    d=d-i;
                }
            }

            cout<<d<<endl;
        }
    }
    return 0;
}
