#include <stdio.h>
int main()
{
    int n,array[100001],i,j,cash=0,f=0;
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    array[i]='\0';
    if (array[0] > 25)
    {
        printf("NO\n");
    }
    else
    {
        for (j=0; j<n; j++)
        {
            if (array[j] == 25)
            {
                cash=cash+array[j];
            }
            else if (array[j] == 50)
            {
                if (cash >= 25)
                {
                    cash=cash-25;
                    cash=cash+array[j];
                }
                else
                {
                    printf("NO\n");
                    f=1;
                    break;
                }
            }
            else if (array[j] == 100)
            {
                if (cash >= 75)
                {
                    cash=cash-75;
                    cash=cash+array[j];
                }
                else
                {
                    printf("NO\n");
                    f=1;
                    break;
                }
            }
        }
        if (f == 0)
        {
            cash=cash-array[n-1];
            if (cash >= 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
