#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int i,j,k;
    char str[101],invrs[101];
    scanf(" %[^\n]",str);
    for (i=0;i<strlen(str);i++)
    {
        cin>>invrs[i];
    }
    invrs[i]='\0';
    if (stricmp(str,invrs)==0)
    {
        cout<<"0"<<endl;
    }
    else if (stricmp(str,invrs)<0)
    {
        cout<<"-1"<<endl;
    }
    else if (stricmp(str,invrs)>0)
    {
        cout<<"1"<<endl;
    }
    return 0;
}
