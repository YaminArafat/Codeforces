#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    char str[101];
    int i,h,e,l,count=0,o,a=0,b=0,c=0;
    scanf(" %[^\n]",str);
    for (h=0; h<strlen(str); h++)
    {
        if (str[h] == 'h')
        {
            a++;
            if (a > 0)
            {
                break;
            }
        }
    }
    if (a != 0)
    {
        for (e=h+1; e<strlen(str); e++)
        {
            if (str[e] == 'e')
            {
                b++;
                if (b > 0)
                {
                    break;
                }
            }
        }
    }
    if (b != 0)
    {
        for (l=e+1; l<strlen(str); l++)
        {
            if (str[l] == 'l')
            {
                count++;
                if (count == 2)
                {
                    break;
                }
            }
        }
    }
    if (count > 1)
    {
        for (o=l+1; o<strlen(str); o++)
        {
            if (str[o] == 'o')
            {
                c++;
                if (c > 0)
                {
                    break;
                }
            }
        }
    }
    if (c == 0)
    {
        o=0;
    }
    if (h+1<e+1 && e+1<l+1 && l+1<o+1 && count>1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
