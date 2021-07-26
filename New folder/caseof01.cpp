#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    int n,i,j,l=0,m=0;
    char array[200001];
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for (j=0; j<n; j++)
    {
        if (array[j]=='0')
        {
            l++;
        }
        else if (array[j]=='1')
        {
            m++;
        }
    }
    if (l==m)
    {
        cout<<"0"<<endl;
    }
    else if (l>m)
    {
        cout<<n-(m*2)<<endl;
    }
    else if (l<m)
    {
        cout<<n-(l*2)<<endl;
    }
    return 0;
}
