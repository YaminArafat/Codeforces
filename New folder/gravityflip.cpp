#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int array[n];
    for (i=0;i<n;i++)
    {
        cin>>array[i];
    }
    array[i]='\0';
    sort(array,array+n);
    for (j=0;j<n;j++)
    {
        cout<<array[j]<<" ";
    }
    cout<<endl;
    return 0;
}
