#include <stdio.h>
int main()
{
    int n,i,j,x=0;
    char str[51];
    scanf("%d",&n);
    for (i=0 ; i<n; i++)
    {
        scanf("%c",&str[i]);
    }
    str[i]='\0';
    for (j=0; j<=n+1; j++)
    {
        if (str[j] == str[j+1])
        {
            x++;
        }
    }
    printf("%d\n",x);
    return 0;
}
