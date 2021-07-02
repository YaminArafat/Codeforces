#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,k;
    cin>>k;
    if(k>36)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        if(k%2==0)
        {
            k=k/2;
            while(k--)
            {
                cout<<"8";
            }
            cout<<endl;
        }
        else
        {
            k=k-1;
            k=k/2;
            while(k--)
            {
                cout<<"8";
            }
            cout<<"6"<<endl;
        }
    }
    return 0;
}
