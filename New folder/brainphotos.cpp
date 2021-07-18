#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    int n,m,i,j,k=0;
    char str[10001];
    cin>>n>>m;
    for (i=0; i<n*m; i++)
    {
        cin>>str[i];
    }
    str[i]='\0';
    for (j=0; j<strlen(str); j++)
    {
        if (str[j] == 'W' || str[j] == 'B' || str[j] == 'G')
        {
            k++;
        }
        else if (str[j] == 'C' || str[j] == 'M' || str[j] == 'Y')
        {
            cout<<"#Color"<<endl;
            break;
        }
    }
    if (k == (n*m))
    {
        cout<<"#Black&White"<<endl;
    }
    return 0;
}
