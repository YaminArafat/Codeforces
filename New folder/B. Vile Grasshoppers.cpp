#include <bits/stdc++.h>
#define maxxxx 1000000001
using namespace std;
//bool flag[maxxxx];
int  seive(int n,int p)
{
    int i,j;
    /*for(i=3;i*i<=maxxxx;i+=2)
    {
        if(!flag[i])
        {
            for (j=i*i;j<=maxxxx;j+=2*i)
            {
                flag[j]=1;
            }
        }
    }*/
    /*for(i=maxxxx;i>=3;i-=2)
    {
        if(!flag[i])
        {
            cout<<i<<endl;
        }
    }*/
    int f=0;
    for(i=3; i*i<=n && i<=p; i+=2)
    {
        if(n%i==0)
        {
            f=1;
            return 0;
        }
    }
    if(!f)
    {
        return 1;
    }
}
int main()
{
    int p,y,f=0;
    //seive();
    scanf("%d %d",&p,&y);
    if(y%2==0)
    {
        y--;
    }
    if (y<=p)
    {
        printf("-1\n");
    }
    else
    {
        for(int i=y; i>=2 && i>p; i-=2)
        {
            if(seive(i,p))
            {
                printf("%d\n",i);
                f=1;
                break;
            }
        }
        if(!f)
        {
            printf("-1\n");
        }
    }
    return 0;
}
































































/*#include <bits/stdc++.h>
using namespace std;
vector<long long>pine;
int main()
{
    long long int p,y,f=0,i,j;
    scanf("%lld %lld",&p,&y);
    for(i=3; i<=y; i+=2)
    {
        pine.push_back(i);
    }
    for(i=3; i<=p; i+=2)
    {
        for(j=0; j<pine.size(); j++)
        {
            if(pine[j]%i==0)
            {
                pine[j]=0;
            }
        }
    }
    for(i=pine.size()-1; i>=0; i--)
    {
        if(pine[i]!=0)
        {
            printf("%lld\n",pine[i]);
            f=1;
            break;
        }
    }
    if(!f)
    {
        printf("-1\n");
    }
    pine.clear();
    return 0;
}*/

/*#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#define mx 1000000001
using namespace std;
//bool st[100000];
int main()
{
    int p,y,f=0;
    vector<bool>st(mx,0);
    scanf("%d %d",&p,&y);
    for(int i=3; i<=p; i+=2)
    {
        if (!st[i])
        {
            for(int j=i; j<=y; j=j+2*i)
            {
                st[j]=1;
            }
        }
    }
    if(y%2==0)
    {
        y--;
    }
    for(int i=y;i>=2;i-=2)
    {
        if(!st[i])
        {
            printf("%d\n",i);
            f=1;
            break;
        }
    }
    if(!f)
    {
        printf("-1\n");
    }
    return 0;
}*/
