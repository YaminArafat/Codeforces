#include <stdio.h>
int main()
{
    int n,a,b,c,k=0,i;

    scanf("%d", &n);

    if (n>=1 && n<=1000)
    {
        for (i=1; i<=n; i++)
        {
            scanf("%d %d %d", &a,&b, &c);

            if ((a==1 && b==1 && c==1) || (a==1 && b==1 && c==0) || (a==1 && b==0 && c==1) || (a==0 && b==1 && c==1))
            {
                k=k+1;

            }
        }
        printf("%d",k);
    }
    return 0;
}
