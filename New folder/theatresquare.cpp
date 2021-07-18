#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
    long long int n,m,a,ans;
    cin>>n>>m>>a;
    if (n>m)
    {
        if (n%a == 0)
        {
            ans=(n/a)*(n/a);
        }
        else
        {
            ans=((n/a)+1)*((n/a)+1);
        }
    }
    else if (m>n)
    {
        if (m%a == 0)
        {
            ans=(m/a)*(m/a);
        }
        else
        {
            ans=((m/a)+1)*((m/a)+1);
        }
    }
    else if (n == m)
    {
        if (m%a == 0)
        {
            ans=(m/a)*(m/a);
        }
        else
        {
            ans=((m/a)+1)*((m/a)+1);
        }
    }
    cout<<ans<<endl;
    return 0;
}
