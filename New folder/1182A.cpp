#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==4)
    {
        cout<<"4"<<endl;
        return 0;
    }
    else if(n==2)
    {
        cout<<"1"<<endl;
        return 0;
    }
    else if(n%2==0)
    {
        int x=(n-4)/2;
        x*=2;
        cout<<x*4<<endl;
        return 0;
    }
    else
        cout<<"0"<<endl;
    return 0;
}
