#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,x,y;
    char str[100];

    scanf("%d", &n);
    if (n>=1 && n<=100)
    {
        for (i=1; i<=n; i++)
        {
            scanf("%s", str);

            x=strlen(str);
            y=x-2;
            if (x>10)
            {
                printf("%c%d%c\n",str[0],y,str[(strlen(str)-1)]);
            }
            else
            {
                printf("%s\n",str);
            }
        }
    }
    return 0;
}
