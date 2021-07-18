#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j;
    int ar[101];
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (j=0; j<n; j++)
    {
        if (ar[j+1]>ar[j] && ar[j-1]<ar[j])
        {
            if ((ar[j+1]-ar[j])%2!=0)
            {
                printf("%d\n",j+2);
                break;
            }
        }
        else if (ar[j+1]>ar[j] && ar[j+1]==ar[j+2])
        {
            if (abs(ar[j]-ar[j+1])%2!=0)
            {
                printf("%d\n",j+1);
                break;
            }
        }
        else if (ar[j]>ar[j-1] && ar[j]>ar[j+1])
        {
            if ((ar[j+1]-ar[j])%2!=0)
            {
                printf("%d\n",j+1);
                break;
            }
        }
    }
    return 0;
}
