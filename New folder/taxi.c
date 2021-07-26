#include <stdio.h>
int main()
{
    int n,i,x,j,y,z,d4=0,d3=0,d2=0,d1=0,x1,x3;
    int array[100001];
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    array[i]='\0';
    for (j=0;j<n;j++)
    {
        if (array[j] == 4)
        {
            d4++;
        }
        else if (array[j] == 3)
        {
            d3++;
        }
        else if (array[j] == 2)
        {
            d2++;
        }
        else if (array[j] == 1)
        {
            d1++;
        }
    }
    if (d2 % 2 ==0)
    {
        x2=d2/2;
    }
    else
    {
        d2=d2-1;
        if (d1 > d2)
        {
            d1=d1-d2;
            x2=1;
        }
        else if (d1 < d2)
        {
            d2=d2-d1;
        }
    }
    if (d3 == d1)
    {
        x3=d3;
    }
    else
    {
        if (d3 > d1)
        {
            x3=d3-d1;
        }
        else if (d3 < d1)
        {
            x1=d1-d3;
        }
    }
    if (d2 == x1)
    {
        x2=x1;
    }
    else
    {
        if (d2 > x1)
        {
            x2=d2-x1;
        }
        else if (d2 < x1)
        {
            x1=d1-d3;
        }
    }
    return 0;
}
