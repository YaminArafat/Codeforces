#include <bits/stdc++.h>
using namespace std;
int flag[100005];
int main()
{
    int n,m,count=0;
    pair<int,int>p;
    vector<pair<int,int> >vec;
    scanf("%d %d",&n,&m);
    int cat_pos[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&cat_pos[i]);
    }
    for(int i=1;i<=n-1;i++)
    {
        int n1,n2;
        scanf("%d %d",&n1,&n2);
        if(!flag[n2])
        {
            flag[n2]=-1;
        }
        if(flag[n1]==-1)
        {
            flag[n1]=1;
        }
        vec.push_back(make_pair(n1,n2));
    }
    for(int i=0;i<vec.size();i++)
    {
        if((vec[i].first!=1 && cat_pos[vec[i].first]) || cat_pos[vec[i].second])
        {
            continue;
        }
        count++;
    }
    printf("%d\n",count);
    return 0;
}
