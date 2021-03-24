#include <bits/stdc++.h>
//#include <ctsdio>
//#include<cstdlib>
//#include <vector>
#define max_ 10000000
using namespace std;
//bool st[max_];
int main()
{
    vector<bool>st(max_,0);
    long long int p,y,f=0,i,j;
    scanf("%lld %lld",&p,&y);
    for(i=2; i<=p; i++)
    {
        if (!st[i])
        {
            for(j=i; j<=y; j=j+i)
            {
                st[j]=1;
            }
        }
    }
    for(i=y;i>2;i--)
    {
        if(!st[i])
        {
            printf("%lld\n",i);
            f=1;
            break;
        }
    }
    st.clear();
    if(!f)
    {
        printf("-1\n");
    }
    return 0;
}
