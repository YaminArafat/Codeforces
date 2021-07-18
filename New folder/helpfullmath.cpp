#include <iostream>
#include <cstdlib>
#include <string.h>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int i,j,k,length;
    char str[101];
    scanf(" %[^\n]",str);
    sort(str,str+strlen(str));
    for (i=strlen(str)/2; i<strlen(str); i=i+1)
    {
        cout<<str[i];
        if (i<strlen(str)-1)
        {
            cout<<"+";
        }
    }
    cout<<endl;
    return 0;
}
