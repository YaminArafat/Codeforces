#include <stdio.h>
#include <strings.h>
int main()
{
    char str[100001];
    int i,a=0,b=0,f=0;
    scanf(" %[^\n]",&str);
    for (i=0; i<strlen(str); i++)
    {
        if (strlen(str) > 3)
        {
            if (str[i] == 'A' && str[i+1] == 'B')
            {
                a++;
            }
            else if (str[i] == 'B' && str[i+1] == 'A')
            {
                b++;
            }
        }
        else
        {
            printf("NO\n");
            f=1;
            break;
        }
    }
    if (f != 1)
    {
        if (a >= 1 && b >= 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
