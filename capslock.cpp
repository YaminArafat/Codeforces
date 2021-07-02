#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
    char str[101];
    int i,j,count=0;
    scanf(" %[^\n]", str);
    for (i=1; i<strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count++;
        }
    }
    if (count == strlen(str)-1)
    {
        if (str[0] >= 'a' && str[0] <= 'z')
        {
            str[0]=str[0]-32;
            cout<<str[0];
            for (i=1; i<strlen(str); i++)
            {
                if (str[i] >= 'A' && str[i] <= 'Z')
                {
                    str[i]=str[i]+32;
                }
                cout<<str[i];
            }
            cout<<endl;
        }
        else
        {
            str[0]=str[0]+32;
            cout<<str[0];
            for (i=1; i<strlen(str); i++)
            {
                if (str[i] >= 'A' && str[i] <= 'Z')
                {
                    str[i]=str[i]+32;
                }
                cout<<str[i];
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<str<<endl;
    }
    return 0;
}
