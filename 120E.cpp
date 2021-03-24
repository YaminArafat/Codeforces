#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t,ans,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            ans=1;
        else if(n==2)
            ans=4;
        else
            ans=((n*n)+1)/2;
        if(ans%2)
            cout<<"0"<<endl;
        else
            cout<<"1"<<endl;
    }
    return 0;
}
