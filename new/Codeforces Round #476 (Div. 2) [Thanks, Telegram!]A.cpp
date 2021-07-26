#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,s,p;
    scanf("%d %d %d %d",&k,&n,&s,&p);
    int x=n/s;
    if(n%s)
    {
        x++;
    }
    int y=k*x;
    if(y%p==0)
    {
        printf("%d\n",y/p);
    }
    else
    {
        int z=(y/p)*p;
        z+=p;
        printf("%d\n",z/p);
    }
    return 0;
}

