#include <stdio.h>
int main()
{
    int n,i,j,k=0;
    int array[101];
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (i=0; i<n; i++)
    {
        if (array[i]>array[i+1])
        {
            n--;
        }
        if (array[i]==1)
        {
            for (j=i+1;j<n;j++)
            {
                if (array[j]!=1)
                {
                    k++;
                }
            }
        }
    }
    printf("%d\n",n-k-2);
    return 0;
}
