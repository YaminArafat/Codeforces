#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
    long long int n,k,i,j,x;
    cin>>n>>k;
    x=n;
    if (x%2 == 0)
    {
        x=x/2;
    }
    else
    {
        x=(x/2)+1;
    }
    if (x>=k)
    {
        for (i=1,j=0; i<=n,j<=x; i=i+2,j++)
        {
            if (j+1 == k)
            {
                cout<<i<<endl;
            }
        }
    }
    else
    {
        for (i=2,j=x+1; i<=n,j<=n; i=i+2,j++)
        {
            if (j == k)
            {
                cout<<i<<endl;
            }
        }
    }
}
