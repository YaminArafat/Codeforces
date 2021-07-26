#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    int n,h,i,j,x=0;
    int array[10001];
    cin>>n>>h;
    for (i=0; i<n; i++)
    {
        cin>>array[i];
    }
    array[i]='\0';
    for (j=0; j<n; j++)
    {
        if (array[j]>h)
        {
            x++;
        }
    }
    cout<<n+x<<endl;
    return 0;
}
