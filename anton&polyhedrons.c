#include <stdio.h>
#include <strings.h>
int main()
{
    int n,i,j,sum=0;
    char str[13];
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf(" %[^\n]",str);
        if (strlen(str) == 11 && str[0] == 'T')
        {
            j=4;
        }
        else if (strlen(str) == 4)
        {
            j=6;
        }
        else if (strlen(str) == 10)
        {
            j=8;
        }
        else if (strlen(str) == 12)
        {
            j=12;
        }
        else if (strlen(str) == 11 && str[0] == 'I')
        {
            j=20;
        }
        sum=sum+j;
    }
    printf("%d\n",sum);
    return 0;
}
