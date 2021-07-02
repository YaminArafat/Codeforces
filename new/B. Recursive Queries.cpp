#include <bits/stdc++.h>
using namespace std;
int rec(int b);
int rec(int b)
{
    int temp,j,m=1;
    temp=b;
    while(temp!=0)
    {
        j=temp%10;
        m*=j;
        temp/=10;
    }
    return m;
}
int g(int a)
{
    int y;
    if(a<10)
    {
        return a;
    }
    else
    {
        y=rec(a);
        g(y);
    }
}
int main()
{
    int n,i,k,l,r,x,count=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&l,&r,&k);
        for(i=l; i<=r; i++)
        {
            x=g(i);
            if(x==k)
            {
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}
