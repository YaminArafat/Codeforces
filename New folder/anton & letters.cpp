#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int i,j,k,x=0;
    char str[1001];
    scanf(" %[^\n]",str);
    for (i=1; i<strlen(str); i=i+3)
    {
        //}
        // str[i]='\0';
        //cout<<str[i];
        //if (str[i]!='*')
        //{
            for (j=i+3; j<strlen(str); j=j+3)
            {
                if (str[i]!=str[j])
                {
                    x++;
                    i=i+3;
                    j=j+3;

                }
            }
        //}

    }
    cout<<x<<endl;
    return 0;
}
