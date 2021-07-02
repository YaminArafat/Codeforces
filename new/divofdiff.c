#include <stdio.h>
int main()
{
    int n,k,m,i,j;
    scanf("%d %d %d",&n,&k,&m);
    int array[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (abs(array[i]-array[j])%m==0)
            {
                printf("%d %d ",array[i],array[j]);
            }
        }
    }
}
