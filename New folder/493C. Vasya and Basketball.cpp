#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,amn=INT_MAX,bmax=0,a,b,cnt=0;
    cin>>n;
    int adol[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>adol[i];
        amn=min(amn,adol[i]);
    }
    int m;
    cin>>m;
    int bdol[m+6];
    for(int i=0; i<m; i++)
    {
        cin>>bdol[i];
        if(bdol[i]<amn)
            cnt++;
        bmax=max(bmax,bdol[i]);
    }
    if(amn>bmax)
    {
        a=n*3;
        b=m*2;
    }
    else
    {
        if(n<m && amn<bmax && !cnt)
        {
            a=n*2;
            b=m*2;
        }
        else
        {
            a=n*3;
            b=cnt*2+(m-cnt)*3;
        }
    }
    cout<<a<<":"<<b<<endl;
    return 0;
}
