#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,count=0;
    cin>>a>>b;
    for(i=1;i<=a;i++)
    {
        if(i%b==0)
        {
            count++;
        }
        if(i==a)
        {
            a=a+count;
            count=0;
        }
    }
    cout<<a<<endl;
    return 0;
}
