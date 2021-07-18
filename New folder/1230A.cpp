#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+b)==(c+d) || (a+c)==(b+d) || (a+d)==(c+b) || (a+b+c)==d||(a+b+d)==c||(a+c+d)==b||(b+c+d)==a)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
