#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;

    scanf("%s", str);

    for (i=0; i<=strlen(str); i++)
    {
        str[i];
        if (str[i]>=33 && str[i]<=126)
        {
            if (str[i]=='H')
            {
                printf("YES");
                break;
            }
            if (str[i]=='Q')
            {
                printf("YES");
                break;
            }
            if (str[i]=='9')
            {
                printf("YES");
                break;
            }
        }
        else
        {
            printf("NO");
            break;
        }
    }
    return 0;
}
