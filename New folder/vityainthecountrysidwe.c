#include <stdio.h>
#include <strings.h>
int main()
{
    int array[93];
    int n,i,j,a=0,b=0;
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    array[i]='\0';
    if (n == 1)
    {
        printf("-1\n");
    }
    else
    {
        for (j=0; j<n-1; j++)
        {
            if (array[j] < array[j+1])
            {
                a++;
            }
            else
            {
                printf("DOWN\n");
                b=1;
                break;
            }
        }
        if (b != 1)
        {
            if (a == n-1)
            {
                printf("UP\n");
            }
            else
            {
                printf("DOWN\n");
            }
        }
    }
    return 0;
}
