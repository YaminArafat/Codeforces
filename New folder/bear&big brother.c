#include <stdio.h>
int main()
{
    int a,b,i=0,j,k;
    scanf("%d %d",&a,&b);
    while (a<=b)
    {
        a=a*3;
        b=b*2;
        i++;
    }
    printf("%d\n",i);
    return 0;
}
