#include <stdio.h>
int main()
{
    int x,y,k;
    scanf("%d %d %d",&x,&y,&k);
    while ((x/y) != k)
    {
        y++;
        printf("%d %d ",x/y,y);
    }
}
