#include <stdio.h>
int main()
{
    int n,i,j,count_petya=0,count_vasya=0;
    scanf("%d",&n);
    int array[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            val=array[i];
            if (array[i]==array[j])
            {
                count_petya++;
            }
        }
    }
}
