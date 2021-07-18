#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int n,k,i,l=0;
    char ar[51];
    cin>>n>>k;
    for (i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (i=0; i<strlen(ar); i++)
    {
        if (ar[i]>=ar[k-1])
        {
            l++;
        }
    }
    cout<<l<<endl;
    return 0;
}
