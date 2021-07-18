#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
    int n,m,x,y;
    cin>>n>>m;
    if (n>m)
    {
        x=(n*m)/n;
    }
    else
    {
        x=(n*m)/m;
    }
    if (x%2 == 0)
    {
        cout<<"Malvika"<<endl;
    }
    else
    {
        cout<<"Akshat"<<endl;
    }
    return 0;
}
