#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    int n,i,m=0,c=0,M,C;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>M>>C;
        if (M>C)
        {
            m++;
        }
        else if (C>M)
        {
            c++;
        }
    }
    if (m>c)
    {
        cout<<"Mishka"<<endl;
    }
    else if (m<c)
    {
        cout<<"Chris"<<endl;
    }
    else if (m==c)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
