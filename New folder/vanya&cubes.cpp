#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int n,i,j,k,l,sum=0;
    cin>>n;
    for (i=1; i<=1; i++)
    {
        for (j=1; j<=(n-i); j++)
        {
            cout<<" ";
        }
        for (l=1;l<=1;l++)
        {
            cout<<"*";
        }
        /*for (k=2; k<i+i; k=k+1)
        {
            cout<<"*";
            sum++;
        }*/
        cout<<endl;
    }
    for (i=2; i<=n; i++)
    {
        for (j=1; j<=(n-i); j++)
        {
            cout<<" ";
        }
        for (k=2; k<=i+i; k=k+1)
        {
            cout<<"*";
            sum++;
        }
        cout<<endl;
    }
    cout<<sum+1<<endl;
    return 0;
}
