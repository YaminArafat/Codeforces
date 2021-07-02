#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int n,k,sum=0,i,tymlft,count=0;
    cin>>n>>k;
    tymlft=240-k;
    for (i=5; i<=tymlft; i=i+5)
    {
        sum=sum+i;
        if (sum<tymlft || sum == tymlft)
        {
            count++;
        }
    }
    if (count>n)
    {
        count=n;
    }
    cout<<count<<endl;
    return 0;
}
