#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    int n,i,j,k;
    char str[10001];
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>str;
    }
    for (j=0; j<(n*5)+1; j++)
    {
        if ((str[j]=='O' && str[j+1]=='O'))
        {
            str[j]='+';
            str[j+1]='+';
            //break;
        }
        /*else if ((str[j]=='O'&& str[j+1]=='O'))
        {
            str[j]='+';
            str[j+1]='+';
            //break;
        }*/
        else
        {
            str[j]=str[j];
        }
        cout<<str[j]<<endl;
    }
    //cout<<str<<endl;
    return 0;
}
