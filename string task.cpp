#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int i,j;
    char str[101];
    scanf(" %[^\n]",str);
    for (i=0; i<strlen(str); i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] !='y' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] !='Y')
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                printf(".%c",str[i]+32);
            }
            else
            {
                cout<<"."<<str[i];
            }
        }
    }
    cout<<endl;
    return 0;
}
