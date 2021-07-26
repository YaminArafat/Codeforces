#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int n1,n2,k1,k2;
    cin>>n1>>n2>>k1>>k2;
    if ((n1>n2)&&(k1<k2))
    {
        cout<<"First"<<endl;
    }
    else if ((n1<n2)&&(k1>k2))
    {
        cout<<"Second"<<endl;
    }
    else if ((n1<n2)&&(k1<k2))
    {
        cout<<"Second"<<endl;
    }
    else if ((n1>n2)&&(k1>k2))
    {
        cout<<"First"<<endl;
    }
    else if ((n1==n2)&&(k1<k2))
    {
        cout<<"Second"<<endl;
    }
    else if ((n1==n2)&&(k1>k2))
    {
        cout<<"Second"<<endl;
    }
    else if ((n1>n2)&&(k1==k2))
    {
        cout<<"First"<<endl;
    }
    else if ((n1<n2)&&(k1==k2))
    {
        cout<<"Second"<<endl;
    }
    else if ((n1==n2)&&(k1==k2))
    {
        cout<<"Second"<<endl;
    }
return 0;
}
