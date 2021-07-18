#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    int i,j,x=0,y=0;
    char str[101];
    scanf(" %[^\n]",str);
    for (i=0; i<strlen(str); i++)
    {
        if (str[i]=='1')
        {
            x++;
            if (y<7)
            {
                y=0;
            }
        }
        else if (str[i]=='0')
        {
            y++;
            if (x<7)
            {
                x=0;
            }
        }
    }
    if (x>=7 || y>=7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
