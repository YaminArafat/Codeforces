#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,sum=0,f=0;
    cin>>n>>v;
    f=min(v,n-1);
    sum+=1*f;
    if(f==n-1)
    {
        cout<<sum<<endl;
        return 0;
    }
    for (int i=2; i<n; i++)
    {
        sum+=i;
        f++;
        if(f==n-1)
            break;
    }
    cout<<sum<<endl;
    return 0;
}

