#include <bits/stdc++.h>
using namespace std;
int rem[200];
int main()
{
    int n,q,sum=0;
    cin>>n>>q;
    vector<int>incoming,needsrvr,duration,ans;
    int a,b,c;
    for(int i=0; i<q; i++)
    {
        cin>>a>>b>>c;
        incoming.push_back(a);
        needsrvr.push_back(b);
        duration.push_back(c);
    }
    int i,j;
    for(i=1,j=0; i<=n && j<needsrvr[0]; i++)
    {
        if(rem[i]==0)
        {
            rem[i]=duration[0];
            sum+=i;
            j++;
        }
    }
    if(j!=needsrvr[0])
    {
        for(i=n; i>=1; i--)
        {
            if(rem[i] && sum!=0)
            {
                rem[i]=0;
                sum-=i;
                if(sum==0)
                    break;
            }
        }
    }
    /*for(i=1; i<=n; i++)
    {
        cout<<"i "<<i<<" rem "<<rem[i]<<endl;
    }
    cout<<"sum : "<<sum<<endl;*/
    if(sum<=0)
        sum=-1;
    ans.push_back(sum);
    sum=0;
    for(int k=1; k<q; k++)
    {
        for(i=1; i<=n; i++)
        {
            if(rem[i])
            {
                rem[i]-=incoming[k]-incoming[k-1];
                if(rem[i]<0)
                    rem[i]=0;
            }
        }
        /*cout<<"age "<<sum<<endl;
        for(i=1; i<=n; i++)
        {
            cout<<"i "<<i<<" rem "<<rem[i]<<endl;
        }*/
        for(i=1,j=0; i<=n && j<needsrvr[k]; i++)
        {
            if(rem[i]==0)
            {
                rem[i]=duration[k];
                sum+=i;
                j++;
                //cout<<"           "<<i<<endl;
            }
        }
        if(j!=needsrvr[k])
        {
            for(i=n; i>=1; i--)
            {
                if(rem[i] && sum!=0)
                {
                    rem[i]=0;
                    sum-=i;
                    if(sum==0)
                    break;
                }
            }
        }
       /* cout<<"pore "<<sum<<endl;
        for(int i=1; i<=n; i++)
        {
            cout<<"i "<<i<<" rem "<<rem[i]<<endl;
        }
        cout<<"sum : "<<sum<<endl;*/
        if(sum<=0)
            sum=-1;
        ans.push_back(sum);
        sum=0;
        //cout<<k<<" "<<sum<<endl;
    }
    for(int i=0; i<q; i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}




/*
10 63
1 1 1
2 1 3
3 2 3
4 1 1
5 2 1
6 4 1
7 5 3
8 3 1
9 1 3
10 2 1
11 1 3
12 1 3
13 1 3
14 2 3
15 2 1
16 3 1
17 3 3
18 2 2
19 2 3
20 1 3
21 1 3
22 2 3
23 1 1
24 1 3
25 3 3
26 1 3
27 5 1
28 5 3
29 5 1
30 2 3
31 2 2
32 2 3
33 1 3
34 1 2
35 2 2
36 1 2
37 1 1
38 2 3
39 3 3
40 1 2
41 1 3
42 5 1
43 4 1
44 1 1
45 2 1
46 3 2
47 1 3
48 4 2
49 2 1
50 1 1
51 1 3
52 1 3
53 3 1
54 2 1
55 1 2
56 2 2
57 1 1
58 1 1
59 3 2
60 3 3
61 2 3
62 5 3
63 5 1

*/
