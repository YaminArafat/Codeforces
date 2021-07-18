#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int k,r,i;
    cin>>k>>r;
    for(i=1;;i++)
    {
        if(i*k%10==0||i*k%10==r)
        {
            break;
        }
    }
    cout<<i<<endl;
    return 0;
}
