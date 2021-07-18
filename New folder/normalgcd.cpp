#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int a,b,c,x,i;
    cin>>a>>b;
    if (a>b)
    {

        for (x=b;x>=1;x--)
        {
            if (a%x==0 && b%x==0)

            break;
        }
        cout<<x<<endl;
    }
    else if (a<b)
    {

        for (x=a;x>=1;x--)
        {
            if (a%x==0 && b%x==0)

            break;
        }
        cout<<x<<endl;
    }
}
