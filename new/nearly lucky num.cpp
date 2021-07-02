#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main()
{
    long long int n,count=0;
    cin>>n;
    while(n!=0)
    {
        if(n%10==4||n%10==7)
        {
            count++;
        }
        n=n/10;
    }
    cout<<count<<endl;
    if(count%10==7||count%10==4)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
