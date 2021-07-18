#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int i,x=0,y=0;
    char str[101];
    scanf(" %[^\n]",str);
    for (i=0; i<strlen(str); i++)
    {
        if (str[i ]>= 'A' && str[i] <= 'Z')
        {
            x++;
        }
        else if (str[i ]>= 'a' && str[i] <= 'z')
        {
            y++;
        }
    }
    if (x>y)
    {
        for (i=0; i<strlen(str); i++)
        {
            if (str[i ]>= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
            cout<<str[i];
        }
        cout<<endl;
    }
    else if (x<y)
    {
        for (i=0; i<strlen(str); i++)
        {
            if (str[i ]>= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
            cout<<str[i];
        }
        cout<<endl;
    }
    else if (x == y)
    {
        for (i=0; i<strlen(str); i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
            cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
