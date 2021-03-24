#include <stdio.h>
int main()
{
    int n,i,a,b,exit=0,entry=0,total,j,max=0;
    int array[1001];
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);
        exit=exit+a;
        entry=entry+b;
        total=entry-exit;
        array[i]=total;
    }
    array[i]='\0';
    for (j=0;j<n;j++)
    {
        if (array[j] > max)
        {
            max=array[j];
        }
    }
    printf("%d\n",max);
    return 0;
}
