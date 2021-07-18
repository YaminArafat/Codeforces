#include <stdio.h>
#include <string.h>
int main()
{
    int i,j;
    char line1[101];
    char line2[101];
    scanf(" %[^\n]",&line1);
    scanf(" %[^\n]",&line2);
    for (i=0;i<strlen(line1);i++)
    {
        if (line1[i]==line2[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    return 0;
}
