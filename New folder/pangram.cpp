#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int n,i,j,k,x=0;
    char str[101];
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>str[i];
    }
    if (n<26)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for (j=0; j<strlen(str); j++)
    {
        if ((str[j]>='A' && str[j]<='Z') || (str[j]>='a' && str[j]<='z'))
        {
            if (str[j] != str[j++] && str[j] != str[j--])
            {
                x++;
            }
        }
    }
    if (x)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
