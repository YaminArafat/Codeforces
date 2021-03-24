#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(b>0)
    {
        if((a+b)%n==0)
            cout<<n<<endl;
        else
            cout<<(a+b)%n<<endl;
    }
    else if(b<0)
    {
        b*=-1;
        b%=n;
        if(!b)
            b=n;
        if(b<=a)
        {
            if(a-b==0)
                cout<<n<<endl;
            else
                cout<<a-b<<endl;
        }
        else
        {
            b=abs(b-a);
            cout<<n-b<<endl;
        }
    }
    else
    {
        cout<<a<<endl;
    }
}
