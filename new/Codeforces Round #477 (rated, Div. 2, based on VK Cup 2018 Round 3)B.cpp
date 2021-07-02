#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    scanf("%d %d",&n,&s);
    pair<int,int>p[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&p[i].first,&p[i].second);
    }
    if(((p[0].first*60)+p[0].second)>s)
    {
        printf("0 0\n");
        return 0;
    }
    else
    {
        for(int i=0; i<n-1; i++)
        {
            int dif=p[i+1].first-p[i].first;
            dif*=60;
            if(p[i+1].second<p[i].second)
            {
                dif-=60;
                dif+=60-p[i].second;
                dif+=p[i+1].second;
            }
            else if (p[i+1].second>p[i].second)
            {
                dif+=p[i+1].second-p[i].second;
            }

            if(dif>=((s+1)*2))
            {
                p[i].second++;
                if(p[i].second==60)
                {
                    p[i].first++;
                    p[i].second=0;
                }
                p[i].second+=s;
                if(p[i].second>=60)
                {
                    p[i].first++;
                    p[i].second-=60;
                }
                printf("%d %d\n",p[i].first,p[i].second);
                return 0;
            }
        }
    }
    p[n-1].second++;
    if(p[n-1].second==60)
    {
        p[n-1].first++;
        p[n-1].second=0;
    }
    p[n-1].second+=s;
    if(p[n-1].second>=60)
    {
        p[n-1].first++;
        p[n-1].second-=60;
    }
    printf("%d %d\n",p[n-1].first,p[n-1].second);
    return 0;
}

