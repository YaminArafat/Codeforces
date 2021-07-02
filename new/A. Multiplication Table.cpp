#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,i,j,count=0;
    cin>>n>>x;
    for(i=1; i<=n; i++)
    {
        if (x%i==0)
        {
            for (j=1; j<=n; j++)
            {
                if(i*j==x)
                {
                    count++;
                    break;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
