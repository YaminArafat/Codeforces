#include <stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    int array[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    array[i]='\0';
    for (j=0; j<=n; j++)
    {
        if (array[j] <= array[j+1])
        {
            if (array[j+1] < array[j+2])
                count++;
        }
    }
    printf("%d\n",count+1);
    return 0;
}
