#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,count=0;
    scanf("%d",&n);
    for(i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            count++;
        }
        else if(n%i==0)
        {
            count+=2;
        }
    }
    cout<<count-1<<endl;
    return 0;
}
