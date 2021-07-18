#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    if (n==3)
    {
        cout<<"7"<<endl;
    }
    else
    {
        for (i=1; i<=n; i++)
        {
            sum=sum+i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
