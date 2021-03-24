#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    for (i=1; i<=n; )
    {
        for (j=1; j<=m; j++)
        {
            cout<<"#";
        }
        cout<<endl;
        if (i == n)
        {
            break;
        }
        i++;
        for (j=1; j<=m-1; j++)
        {
            cout<<".";
        }
        for (j=1; j<=1; j++)
        {
            cout<<"#";
        }
        cout<<endl;
        if (i == n)
        {
            break;
        }
        i++;
        for (j=1; j<=m; j++)
        {
            cout<<"#";
        }
        cout<<endl;
        if (i == n)
        {
            break;
        }
        i++;
        for (j=1; j<=1; j++)
        {
            cout<<"#";
        }
        for (j=2; j<=m; j++)
        {
            cout<<".";
        }
        cout<<endl;
        if (i == n)
        {
            break;
        }
        i++;
    }
    return 0;
}
