#include <stdio.h>
//#include <string.h>
int main()
{
    int x=0;
    int n,i;
    char a[3];
    char s[3]={'X','+','+'};
    char p[3]={'X','-','-'};

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%s", &a[i-1]);

        if (a[2]==s[2])
        {
            x=x+1;
        }
        if (a[2]==p[2])
        {
            x=x-1;
        }
        while (i==n)
        {
            break;
        }
    }
    printf("%d\n",x);
    return 0;
}
