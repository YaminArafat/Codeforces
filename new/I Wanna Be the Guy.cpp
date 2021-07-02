#include <bits/stdc++.h>
using namespace std;
bool st[100];
int main()
{
    int n,p,q,i,count=0;
    cin>>n;
    cin>>p;
    int parr[p];
    for(i=0; i<p; i++)
    {
        cin>>parr[i];
        st[parr[i]]=1;
    }
    cin>>q;
    int qarr[q];
    for(i=0; i<q; i++)
    {
        cin>>qarr[i];
        if(st[qarr[i]]!=1)
        {
            st[qarr[i]]=1;
        }
    }
    for(i=1; i<=n; i++)
    {
        if (st[i]==1)
        {
            count++;
        }
    }
    if(count==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
