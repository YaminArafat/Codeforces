#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=2;
    scanf("%d",&n);
    pair<int,int>p[n];
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&p[i].first,&p[i].second);
    }
    for(i=1; i<n-1; i++)
    {
        if (p[i].second<(p[i].first-p[i-1].first))
        {
            c++;
        }
        else if (p[i].second<(p[i+1].first-p[i].first))
        {
            c++;
            p[i].first+=p[i].second;
        }
    }
    printf("%d\n",n==1?c-1:c);
    return 0;
}
