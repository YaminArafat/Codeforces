#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    int n,k,i,j,count=0;
    int array[20001];
    cin>>n>>k;
    for (i=0; i<n; i++)
    {
        cin>>array[i];
    }
    array[i]='\0';
    for (j=0; j<n; j++)
    {
        if ((k+array[j]==5) || (k+array[j]<5))
        {
            count++;
        }
    }
    if (count>3 ||count == 3)
    {
        cout<<count/3<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
