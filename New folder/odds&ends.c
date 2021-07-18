#include <stdio.h>
int main()
{
    int n,i,j,a=0,b=0,k;
    int arr[101];
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[i]='\0';
    for (j=0; j<n; j++)
    {
        if (arr[j] % 2 != 0)
        {
            a++;
        }
        else if (arr[j] % 2 == 0 && arr[j] != 0)
        {
            b++;
        }
    }
    if ((n % 2) != 0 && n != 1)
    {
        if ((a >= 2) && arr[0] % 2 != 0 && arr[n-1] % 2 != 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else if (n == 1)
    {
        if (a != 1)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
