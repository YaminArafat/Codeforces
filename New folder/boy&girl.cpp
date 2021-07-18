#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    int i,j,k,count=0,x=0;
    char str[101];
    scanf(" %[^\n]",str);
    for (i=0;i<strlen(str);i++)
    {
        for (j=i+1;j<strlen(str);j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
            if (count>1)
            {
                x++;
            }
        }
    }
}
