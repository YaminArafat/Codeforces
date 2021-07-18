#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m;
    if(n>=m)
    {
        a=n%2?(n/2)+1:n/2;
        while(a%m)
        {
            a++;
        }
        cout<<a<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
