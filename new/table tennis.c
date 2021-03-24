#include <stdio.h>
int main()
{
    int n,i,hold;
    long long int k,count=0;
    scanf("%d %lld",&n,&k);
    int array[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    hold=array[0];
    for (i=1; i<n; i++)
    {
        if (hold>array[i])
        {
            count++;
        }
        else
        {
            hold=array[i];
            count=1;
        }
        if (count==k)
        {
            break;
        }
    }
    printf("%d\n",hold);
    return 0;
}
