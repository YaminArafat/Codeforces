#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s;
    cin>>a>>b>>s;
    while(1)
    {
        s=s-__gcd(a,s);
        if(s<=__gcd(b,s)&&s)
        {
            cout<<"1"<<endl;
            break;
        }
        s=s-__gcd(b,s);
        if(s<=__gcd(a,s)&&s)
        {
            cout<<"0"<<endl;
            break;
        }
    }
    return 0;
}
