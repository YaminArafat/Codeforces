#include <stdio.h>
#include <string.h>
int main()

{
    char str[101];
    int i,j;
    char x;

    scanf(" %[^\n]" , str);
    for (i=1;i<strlen(str);i++)
    {
        if (str[i]<97)
        {
            printf("%c%s",str[0]-32,str[i]+32);
        }
    }
    return 0;
}
