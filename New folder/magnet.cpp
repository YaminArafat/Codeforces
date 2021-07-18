#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
    int n,i,j,x=1,y=1;
    char str[100001];
    cin>>n;
    for (i=0; i<n; i++)
    {
        scanf("%d",&str[i]);
    }
    for (j=0; j<strlen(str); j++)
    {
        if (str[j]==10)
        {
            x=x;
            if (str[j+1]==01)
            {
                x++;
            }
        }
        if (str[j]==01)
        {
            y=y;
            if (str[j+1]==10)
            {
                y++;
            }
        }
    }
    if (y==0 || x==0)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<(x+y)-1<<endl;
    }
    return 0;
}
