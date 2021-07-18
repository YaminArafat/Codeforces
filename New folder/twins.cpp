#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,i,j,mum=0,sum=0;
    int ar[101];
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }
    sort(ar,ar+n,greater<int>());
    for (j=0; j<n; j++)
    {
        mum=mum+ar[j];
        if (mum > (sum/2))
        {
            cout<<j+1<<endl;
            break;
        }
    }
    return 0;
}
