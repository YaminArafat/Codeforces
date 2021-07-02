#include <stdio.h>
int main()
{
    int n,i,j,max=0;
    scanf("%d",&n);
    int array[n*2];
    for (i=0;i<n*2;i++)
    {
        scanf("%d",&array[i]);
    }
    for (i=0,j=1;i<(n*2)-1,j<n*2;i=i+2,j=j+2)
    {
        while (array[i]<=max)
        {
            array[i]=array[i]+array[j];
        }
        max=array[i];
    }
    printf("%d\n",max);
    return 0;
}
