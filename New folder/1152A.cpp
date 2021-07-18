#include<bits/stdc++.h>
using namespace std;
int p=0;
vector<int>vec;
int fun(int x)
{
    for(int j=0; j<=30; j++)
    {
        //cout<<"i "<<i<<" j "<<j<<" x "<<y+1<<endl;
        p=fun((x^(int)(powl(2,j)-1))+1);
        /*if(p==1)
        {
            vec.push_back(j);
        }*/
    }
    return 0;
}
int main()
{
    int x;
    cin>>x;
    for(int i=0; i<40; i++)
    {
        fun((x^(int)(powl(2,i)-1))+1);
    }
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
}
/*
for(int i=0;i<=30;i++)
    {
        if(powl(2,i)-1==x)
        {
            return 1;
        }
    }
{

    long long n,m,a_odd=0,a_evv=0,b_odd=0,b_evv=0;
    cin>>n>>m;
    int a[n+10],b[m+10];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2)
        {
            a_odd++;
        }
        else
        {
            a_evv++;
        }
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        if(b[i]%2)
        {
            b_odd++;
        }
        else
        {
            b_evv++;
        }
    }
    cout<<min(a_odd,b_evv)+min(a_evv,b_odd)<<endl;
    return 0;
}*/
