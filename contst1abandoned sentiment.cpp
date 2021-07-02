#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int n,k,i,j,x,y,mx;
    char a[101];
    char b[101];
    cin>>n;
    cin>>k;
    for (i=0; i<n; i++)
    {
        cin>>a[i];
    }
    a[i]='\0';
    for (j=0; j<k; j++)
    {
        scanf("%d",&b[j]);
    }
    b[j]='\0';
    //int x=0;
    for (x=0; a[x]!='\0'; x++)
    {
        cout<<a[x]<<endl;
    }
    for (y=0; y<strlen(b); y++)
    {
        cout<<b[y]<<endl;
    }
    if (a[i]=='0')
    {
        a[i]=b[j];
        if (a[i]>a[i+1])
        {
            x=1;
        }

        else
        {
            x=0;
            j++;
        }
    }

//int x;
    if (x==1)
    {
        //cout<<"Yes"<<endl;
    }
    else
    {
        //cout<<"No"<<endl;
    }
}
