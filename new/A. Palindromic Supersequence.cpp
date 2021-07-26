#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int i,j,count=0;
    char str[1001];
    scanf("%s",str);
    for(i=0; i<strlen(str)-1; i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
    }
    if(count+1==strlen(str))
    {
        printf("%s",str);
    }
    else
    {
        printf("%s",str);
        for(i=strlen(str)-1; i>=0; i--)
        {
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
