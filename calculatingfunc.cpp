#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
    long long int num,ans;
    cin>>num;
    if (num%2 == 0)
    {
        ans=num/2;
    }
    else
    {
        ans=-((num/2)+1);
    }
    cout<<ans<<endl;
    return 0;
}
