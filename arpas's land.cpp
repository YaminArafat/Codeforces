#include <bits/stdc++.h>
using namespace std;
int bigi(int p)
{
    if(p==0)
    {
        return 1;
    }
    if(p%2)
    {
        return (((1378%10)*bigi(p-1)%10)%10);
    }
    if(p%2==0)
    {
        int x=bigi(p/2);
        return ((x%10)*(x%10))%10;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<bigi(n)<<endl;
    return 0;
}
