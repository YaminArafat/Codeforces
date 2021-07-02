#include <stdio.h>
int main()
{
    int tc,i,n;
    scanf("%d",&tc);
    for (i=0;i<tc;i++)
    {
        scanf("%d",&n);
        if (n>=60)
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
