#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,eve=0,odd=0,x,ans;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x%2)
        {
            odd++;
        }
        else
        {
            eve++;
        }
    }
    if(eve>odd)
    {
        ans=odd;
    }
    else
    {
        odd-=eve;
        ans=eve;
        ans+=odd/3;
    }
    printf("%d\n",ans);
    return 0;
}
