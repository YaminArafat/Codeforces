#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    int n,i,j,a=0,d=0;
    char str[1000001];
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>str[i];
    }
    str[i]='\0';
    for (j=0; j<n; j++)
    {
        if (str[j] == 'A')
        {
            a++;
        }
        else if (str[j] == 'D')
        {
            d++;
        }
    }
    if (a>d)
    {
        cout<<"Anton"<<endl;
    }
    else if (a<d)
    {
        cout<<"Danik"<<endl;
    }
    else if (a == d)
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}
