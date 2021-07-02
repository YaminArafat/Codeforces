#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k=0;
    cin>>n>>t;
    if(n==1 && t>=10)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(t==10)
    {
        n=n-1;
        cout<<"1";
    }
    while(n--)
    {
        if(t<10)
            cout<<t;
        else
            cout<<"0";
    }
    cout<<endl;
    return 0;
}
////////////////////////////////ZIA////////////////////////////////////
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , t;
    cin>>n>>t;
    if(n==1 && t>=10)cout<<"-1\n";
    else if(t==10){cout<<"1";
    n--;
    while(n--)cout<<"0";
    cout<<endl;
    }
    else{
        while(n--)
        {
            cout<<t;
        }
        cout<<endl;
    }


}*/
