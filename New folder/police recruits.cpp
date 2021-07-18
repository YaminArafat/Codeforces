#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    int n,i,j,k,x=0;
    long long int str[10001];
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>str[i];
    }
    str[i]='\0';
    for (j=0;j<n;j++)
    {
        if (str[j] == '-1')
        {
            if (str[j-1] == '-1')
            {
                x++;
            }
        }
    }
    cout<<x<<endl;
    return 0;
}
