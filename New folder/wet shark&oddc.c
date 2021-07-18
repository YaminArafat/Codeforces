#include <stdio.h>
int main()
{
    int n,i,j,k,sum=0;
    int array[1000001];
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    //array[i]='\0';
    for (j=0; j<n; j++)
    {
        if (sum%2 == 0)
        {
            sum=sum+array[j];
        }
    }
    printf("%d\n",sum);
    return 0;
}
