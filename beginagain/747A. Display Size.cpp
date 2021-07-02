#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    x=sqrt(n)+1;
    for(int i=x; i>=1; i--)
    {
        if(n%i==0)
        {
            if(i<(n/i))
            {
                cout<<i<<" "<<n/i<<endl;
                return 0;
            }
            else
            {
                cout<<n/i<<" "<<i<<endl;
                return 0;
            }
        }
    }
}
