#include <stdio.h>
int main()
{
    int tc,i,j,x=1,y=0;
    int arr[100000];
    scanf("%d",&tc);
    for (i=1;i<=tc;i++)
    {
        scanf("%d",&arr[i-1]);
        for (j=0;j<=sizeof(arr[i-1]);j++)
        {
            if (arr[i-1]!=arr[i])
            {
                x++;
            }
            else if (arr[i-1]==arr[i])
            {
                x=x;
            }
        }
    }
    printf("%d",(x/10));
    return 0;
}
