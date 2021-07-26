#include <stdio.h>
#include <string.h>
int main()
{
    int n,k,i,l=0;
    char ar[51];
    scanf("%d %d",&n,&k);
    for (i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (i=0;i<strlen(ar);i++)
    {
            if (ar[i]>=ar[k-1])
            {
                l++;
            }

    }
    printf("%d\n",l);
    return 0;
}
