#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0;
    scanf("%d",&n);
    long long sze[n+5],cost[n+5],sum=0,mn=10000000000000000;
    for(int i=1; i<=n; i++)
    {
        scanf("%lld",&sze[i]);
        if(i>1)
        {
            if(sze[i]>sze[i-1])
                f++;
        }
    }
    for(int i=1; i<=n; i++)
    {
        scanf("%lld",&cost[i]);
    }
    if(f<2)
    {
        printf("-1\n");
        return 0;
    }
    for(int i=1; i<=n-2; i++)
    {
        for(int j=i+1; j<=n-1; j++)
        {
            if(sze[i]>=sze[j])
                continue;
            for(int k=j+1; k<=n; k++)
            {
                if(sze[j]>=sze[k])
                    continue;
                sum+=cost[i]+cost[j]+cost[k];
                //cout<<i<<" "<<j<<" "<<k<<" "<<sum<<endl;;
                if(sum)
                    mn=min(mn,sum);
                sum=0;
            }

        }

    }
    printf("%lld\n",mn);
    return 0;
}
/*int n;
    string s;
    map<string,string>mp;
    mp["purple"]="Power";
    mp["green"]="Time";
    mp["blue"]="Space";
    mp["orange"]="Soul";
    mp["red"]="Reality";
    mp["yellow"]="Mind";
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>s;
        mp[s]="a";
    }
    printf("%d\n",6-n);
    for(map<string,string>::iterator it=mp.begin();it!=mp.end();it++)
    {
        if(it->second!="a")
            cout<<it->second<<endl;
    }
    return 0;*/
/*long long x,y;
    scanf("%lld %lld",&x,&y);
    if(y==x|| (x==2&&y==4)||(x==4&&y==2))
    {
        printf("=\n");
        return 0;
    }
    //double lx=log10((double)x);
    //double ly=log10((double)y);
    //cout<<lx<<" "<<ly<<endl;
    if(x==1 ||(x==2&&y==3))
    {
        printf("<\n");
        return 0;
    }
    if(y==1||(x==3&&y==2))
    {
        printf(">\n");
        return 0;
    }
    /*if(lx==ly)
    {
        if(x<y)
          printf(">\n");
        else
            printf("<\n");
        return 0;
    }
    else *//*if(x>y)
        printf("<\n");
    else
        printf(">\n");
    return 0;*/
