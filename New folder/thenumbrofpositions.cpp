#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,count=0;
    scanf("%d %d %d",&n,&a,&b);
    for(int i=a+1;i<=n;i++)
    {
        if(i-1>=a)
        {
            if(n-i<=b)
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
